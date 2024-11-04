#include <stdio.h>
#include <math.h>

#define BASE 2
 int main (){
	 int N;
	 printf ("Vvedite naturalnoe chislo N:");
	 scanf ("%d",&N);
	 if (N<1){
		 printf ("Oshibka");
		 return 1;
	 }
	 int result = (int)pow(BASE,N);
	 printf ("2^ %d=%d\n", N, result);
	 return 0;

 }
