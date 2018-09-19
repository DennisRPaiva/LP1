#include <stdio.h>

int main()
{
	char temps[50];
	int temperatura;
	int i,soma = 0,media;

	for (i = 0;i<50;i++)
	{
		printf("Escreva uma temperatura(celcius): ");
		scanf("%d",&temperatura);

		while(temperatura < -100 || temperatura > 100)
		{
			printf("Temperatura nao valida!\n");
			printf("Escreva uma temperatura(celcius): ");
			scanf("%d",&temperatura);
		}
		soma += temperatura;
		//printf("%d\n",soma);
		temps[i] = (char)temperatura;
	}
	media = soma/50;

	printf("A media eh: %d\n", media);

	return 0;
}
