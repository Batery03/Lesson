#include <iostream>

using namespace std;
//Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали.
const int X=7;
const int Y=7;
int MASS[X][Y];
int sidediag[7];
int sum=0;
int main()
{    for (size_t i = 0; i < X; i++) {
     for (int j = 0; j < Y; j++) {
     MASS[i][j] = rand() % 15;}};
     for (size_t i = 0; i < X; i++) {
     for (size_t j = 0; j < Y; j++) {
     if (j == X - (i + 1)) {
     sidediag[i] = MASS[i][j];}
     for (int i=0; i<7; i++)
         sum += sidediag[i];
      printf("sum=%d",sum);} }
    return 0;
}
