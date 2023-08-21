#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//  Escrever um programa que determina se um dado número inteiro é primo ou não.
int main () {

   unsigned int N, cont, time;
scanf ("%d", &N);
time = clock();
if ( (N%2 == 0 && N != 2) || N <= 1)
{
printf ("NÃO PRIMO");
return 0;
}
    for (cont = 3; cont <= sqrt(N); cont+= 2)
    {
        if (N%cont == 0)
        {
            printf ("NÃO PRIMO");
            return 0;
        }
          
    }
    printf ("\nPRIMO");
    printf("%ld\n", clock()-time);

    return 0;

   }