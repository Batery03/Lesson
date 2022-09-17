#include"FillingMass.h"
#include<stdio.h>
#include <stdlib.h>

void FillingMass(int* array_M,int x)
{
    for(int i = 0; i <x; ++i)
    {
        *array_M = rand();
        printf("%d ", array_M[i]);}
        }
