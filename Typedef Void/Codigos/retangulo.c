#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

typedef struct retangulo{

    int id;
    float x;
    float y;
    float width;
    float height;
    float area;

}RetanguloStruct;

Retangulo criaRetangulo(int id, float x, float y, float width, float height){

    RetanguloStruct* retangulo = (RetanguloStruct*) malloc(sizeof(RetanguloStruct));

    retangulo->id = id;
    retangulo->x = x;
    retangulo->y = y;
    retangulo->width = width;
    retangulo->height = height;
    retangulo->area = width * height;

    return retangulo;

}

float getArea(Retangulo retangulo){

    RetanguloStruct* ret = (RetanguloStruct*) retangulo;

    return ret->area;

}

void setWidth(Retangulo retangulo, float width){

    RetanguloStruct* ret = (RetanguloStruct*) retangulo;

    ret->width = width;
    ret->area = ret->width * ret->height;

}