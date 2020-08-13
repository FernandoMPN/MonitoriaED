#ifndef __lista__
#define __lista__

typedef void* No;
typedef void* Lista;
typedef void* Info;

/*
*   cria uma lista vazia
*   sem requerimentos
*   retorna uma lista vazia
*/
Lista create();

/*
*   insere um elemento na lista
*   necessita de uma lista iniciada
*   nao retorna nada
*/
void insert(Lista l, Info info);

/*
*   imprime todos os elementos da lista
*   uma lista com pelo menos um elemento
*   nao retorna nada
*/
void print(Lista l);

No getFirst(Lista lista);

No getNext(No elemento);

Info getInfo(No elemento);


/* funções do tad nao implementadas
    insertAfter()
    insertBefore()
    getLast()
    getPrevious()
*/

#endif