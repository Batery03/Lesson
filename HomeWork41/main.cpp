#include <stdio.h>
#include <cstdlib>

//- Поменять местами максимальный и последний отрицательный элементы массива M(40)
int M[40];
int tmax=0;
int tmin=0;
int max;
int main()
{   for(int t=0;t<40;t++) {M[t]=rand();
    printf("%d\n",M[t]);}
    for(int t=1;t<40;t++)
    {if(M[t]>max)
    max=M[t];
    tmax=t;

    if(M[t]<M[tmin])
    tmin=t;}
    printf("\nmax=%d\n",max);
    printf("\ntmin=%d\n",tmax);
  return(0) ;

}
