#ifndef __RETANGULO_H
#define __RETANGULO_H

typedef void* Retangulo;

/* Cria um retangulo
* Pre: variaveis iniciais do retangulo
* Pos: endereco do retangulo
*/ 
Retangulo criaRetangulo(int id, float x, float y, float width, float height);

float getArea(Retangulo retangulo);

void setWidth(Retangulo retangulo, float width);

#endif
