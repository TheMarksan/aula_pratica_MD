#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// para verificar a performance, use a biblioteca time.h e a função clock!
int primechecker (int N) {

   unsigned int N, cont;
   // Números primos são somente positivos,
   // poupa espaço para números maiorss
scanf ("%d", &N);

if ( (N%2 == 0 && N != 2) || N <= 1)
{
return 0;
}
    for (cont = 3; cont <= sqrt(N); cont+= 2)
    {
        if (N%cont == 0)
        {
            return 0;
        }
          
    }

    return 1;

   }