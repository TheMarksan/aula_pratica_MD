#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int primechecker (unsigned long int N) {


   


    if ( (N%2 == 0 && N != 2) || N <= 1)
    {
    return 0;
    }
        for (int cont = 3; cont <= sqrt(N); cont+= 2)
        {
            if (N%cont == 0)
            {
                return 0;
            }
            
        }

        return 1;

    }
int main ()
{

int time;
long int current_number = 3;
long int primes = 1;
time = clock();
while ((clock()-time)/CLOCKS_PER_SEC <60)
{
if ( primechecker(current_number) == 1)
{
    primes++;
    printf("%ld   ",primes);
}
current_number += 2;
}

printf("\n%ld",primes);
}
// A intenção é alcançar os 2.7 milhões.
// Favor fazer o teste nos seus computadores e dizer o último valor printado...