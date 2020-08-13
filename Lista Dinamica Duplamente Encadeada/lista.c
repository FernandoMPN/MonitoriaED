#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct N
{
    int info;
    struct N *anterior;
    struct N *proximo;
} no;

typedef struct L {
    no *primeiro;
    no *ultimo;
} list;

Lista create() {
    list* lista = (list*) malloc(sizeof(list));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}

void insert(Lista l, int info) {
    list* lista = (list*) l;

    no* node = (no*) malloc(sizeof(no));
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

void print(Lista l) {
    int i = 1;
    list* lista = (list*) l;
    no* node = lista->primeiro;
    while(node->proximo != NULL) {
        printf("no %d => %d\n", i, node->info);
        node = node->proximo;
        i++;
    }
}