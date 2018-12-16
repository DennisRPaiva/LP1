#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreva_string(FILE* arq,char* frase)
{
	int tam,i;

	tam = strlen(frase);

	arq = fopen("8.4.txt","w");

	for(i = 0; i<=tam;i++)
	{
		if(frase[i] == '\0')
		{
			break;
		}
		fputc(frase[i],arq);
	}
	fclose(arq);
}

int main()
{
	char frase[25];
	FILE* arq;
	
	scanf("%[^\n]",frase);
	escreva_string(arq,frase);
	
	return 0;
}
