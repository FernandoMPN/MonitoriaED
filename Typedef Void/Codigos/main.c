#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "retangulo.h"

int main(){

    Lista listaRetangulos = create();

    Retangulo retangulo1 = criaRetangulo(1, 5, 5, 20, 50);

    insert(listaRetangulos, retangulo1);

    /* Verifica se inseriu o retangulo na lista */

    No node = getFirst(listaRetangulos);
    Info elemento = getInfo(node);

    printf("area retangulo 1 = %f\n", getArea(elemento));

    /* Insere um novo retangulo */

    retangulo1 = criaRetangulo(2, 10, 15, 10, 7);
    insert(listaRetangulos, retangulo1);

    /* Verifica se inseriu corretamente um novo retangulo */

    node = getNext(node); /* Anda com a lista para o proximo node */
    elemento = getInfo(node); /* Recebe o Info armazenado no node */
    
    printf("area retangulo 2 = %f\n", getArea(elemento));

    /* Verifica se o setWidth esta funcionando */

    setWidth(elemento, 5);

    printf("nova area retangulo 2 = %f\n", getArea(elemento));

    return 0;

}