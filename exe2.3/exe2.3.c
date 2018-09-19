#include <stdio.h>

int main()
{
	char temps[50];
	int temperatura;
	int i,soma = 0,cont = 0;
	float media;

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
	for(i = 0;i<50;i++)
	{
		if ((int)temps[i] > media)
		{
			cont++;
		}
	}

	printf("A media eh: %f.2f\n", media);
	printf("Acima da media: %d\n", cont);

	return 0;
}
