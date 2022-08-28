#include<stdio.h>
#include<math.h>
double x;
int main()
{
    double Y,A,B;
    A=2*cos(x-M_PI/6)+sqrt(2);
    B=1/(2*log(x))+sin(pow(2,x))*sin(pow(2,x));
    Y=A/B*exp(3*x);
    printf("Meaning_Y:%f",Y);

}
