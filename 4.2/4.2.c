#include <stdio.h>
#include <math.h>


int todos_os_primos(int numero)
{
   int i;
   int cont = 0;
  for (i=1;i<=numero;i++)
   {
      if(eh_primo(i))
      {
         continue;
      }
      cont++;
   }
   printf("%d\n",i); // imprime os primos
   return cont;
}

int eh_primo(int primo)
{
   int i;
   for (i=2;i<=sqrt(primo);i++)
   {
      if(primo % i == 0)
      {
         return 1; // Nao eh primo
      }
   }
   return 0; // Eh primo
}

int main()
{
   int num;
   int x;
   printf("Escreva um numero: ");
   scanf("%d",&num);
   x = todos_os_primos(num);

   printf("Existem %d numeros primos ate %d.",x,num);
}
