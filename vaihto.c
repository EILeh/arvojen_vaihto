#include <stdio.h>
#include <stdlib.h>
#include "vaihto.h"



void vaihda(int *a, int *b)
{
    int a_temp = *a;
    *a = *b;
    *b = a_temp;
}

/*void jarjesta(int *a, int *b, int *c);*/
