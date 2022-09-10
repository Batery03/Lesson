#include <iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;
int A[30];
int B[15];
int main()
{  for(int i=0;i<30;i++) {
   A[i]=rand();
   for(int i=0;i<30;i++)
       printf("%d\n",A[i]);
   for(int j=0;j<15;j++)
       B[j]=rand();
   for(int j=0;j<15;j++)
       printf("%d\n",B[j]);
     }
    return 0;
}
