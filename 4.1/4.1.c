#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int eh_primo(long long int prim)
{
   int i;
   for (i=2;i<=sqrt(prim);i++)
   {
      if(prim % i == 0)
      {
         return 1;
      }
   }
   return 0;
}

int main()
{
   long long int num;
   printf("Escreva um numero: ");
   scanf("%lld",&num);
   
   if(eh_primo(num))
   {
      printf("Nao eh primo!");
      return 0;
   }
   printf("Eh primo!");
   return 0;
}
