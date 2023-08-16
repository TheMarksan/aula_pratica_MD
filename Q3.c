#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehprimo (int x,int cont){
	if ( x == 0 || x == 1)
	{
		return 0;
	}
	if (x == 2 || x == 3 )
	{
		
		return 1;
	}
	if (x%cont !=0 && cont > 2)
	{
		
		
		
		return ehprimo(x, cont-1);
	}
	else if (x%cont == 0)
	{
		
		return 0;
	}
	else
	{
		return 1;
	}
		
}

double nextprimo (int y,int n)
{
	if (y <= n && ehprimo(y,y/2) == 1 && n%y == 0)
	{
		return y;
	}
	else return nextprimo(y+1,n);
	
}

int loop (int fatorado)
{

if ( fatorado != 1)
{

printf ("%.0lf \n", nextprimo (2,fatorado));


return loop((fatorado/nextprimo (2,fatorado)));
}



}


int main () {

int n;

scanf ("%d",&n);

 loop(n);



    
}