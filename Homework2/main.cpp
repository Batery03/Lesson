#include <stdio.h>
#include<math.h>


float R,d;

int main()
{

    scanf("%f %f",&R,&d);
    float Squa,Scir;
    Squa=d*d;
    Scir=M_PI*pow(2,R);
    printf((Squa>Scir)?"Smax=Squa" :"Smin=Scir");
    printf((Squa<Scir)?"Smin=Squa":"Smax=Scir");

}
