//escrever um programa para determinar o mdc e o mmc de dois inteiros com base em seus fatores primos

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void primemaker (int A, int B)
{
while (A != 1)
    while (A % 2 == 0) {
        A = A/2;
        printf ("2\n");
    }

  int n = 3;
   while (A%n !=0)
   {
    n++;
   }
   while (A%n == 0)
   {
    A = A/n;
    printf ("%d\n", n);
   }
}
int main () 
{

int A, B;

scanf ("%d %d", &A, &B);
primemaker (A, B);



}