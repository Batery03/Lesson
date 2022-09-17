#include"MaxElement.h"
#include<stdio.h>

void MaxElement(int* array_M, int* size_array_M){
  int max=array_M[0];
  int max_index_N=0;
      int negative = array_M[0];
      int negative_index = 0;
      for(int j = 0; j < *size_array_M; ++j)
        for(int j = 0; j < *size_array_M; ++j)
        {
               if (array_M[j] > max){
                   max = array_M[j];
                   max_index_N=j;
               }
               if (array_M[j] < 0){
                    negative = array_M[j];
                    negative_index = j;
                           } }
            array_M[max_index_N] = negative;
            array_M[negative_index] = max;
       }


