#include <stdio.h>
#include <math.h>

#define BASE 2
 int main(){
	 int N;
	 int res = 1;
	 int *pRes = &res;
         printf ("Vvedite naturalnoe chislo N:");
	 if (scanf("%d",&N) !=1 || N<1)
	 {
		 printf ("Oshibka");
		 return 1;
	 }
for (int i=0; i<N; i++)
{
         *pRes *= BASE;	
}
	 printf ( "%d=%d\n", N, *pRes);
	 return 0;

 }
