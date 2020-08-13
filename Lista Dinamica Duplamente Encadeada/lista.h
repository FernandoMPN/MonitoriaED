#ifndef __lista__
#define __lista__

typedef void* No;
typedef void* Lista;

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
void insert(Lista l, int info);

/*
*   imprime todos os elementos da lista
*   uma lista com pelo menos um elemento
*   nao retorna nada
*/
void print(Lista l);

/* funções do tad nao implementadas
    insertAfter()
    insertBefore()
    getFirst()
    getLast()
    getNext()
    getPrevious()
*/

#endif
