#include "lista.h"

void main() {
    Lista lista = create();
    for(int i = 0; i < 3000; i ++)
        insert(lista, i);
    
    print(lista);
}