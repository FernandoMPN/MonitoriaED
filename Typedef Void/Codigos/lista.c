#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct node{
    Info info;
    struct node *anterior;
    struct node *proximo;
}NodeStruct;

typedef struct lista{
    NodeStruct *primeiro;
    NodeStruct *ultimo;
}ListaStruct;

Lista create() {

    ListaStruct* lista = (ListaStruct*) malloc(sizeof(ListaStruct));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;

}

void insert(Lista l, Info info) {
    
    ListaStruct* lista = (ListaStruct*) l;

    NodeStruct* node = (NodeStruct*) malloc(sizeof(NodeStruct));
    node->info = info;

    if(lista->primeiro == NULL) {
        node->anterior = NULL;
        lista->primeiro = node;
    } else {
        lista->ultimo->proximo = node;
        node->anterior = lista->ultimo;
    }
    
    node->proximo = NULL;
    lista->ultimo = node;

}

No getFirst(Lista lista){

    ListaStruct* l = (ListaStruct*) lista;

    return l->primeiro;

}

No getNext(No elemento){

    NodeStruct* node = (NodeStruct*) elemento;

    return node->proximo;

}

Info getInfo(No elemento){

    NodeStruct* node = (NodeStruct*) elemento;

    return node->info;

}
