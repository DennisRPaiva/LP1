#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frases[10][25];
	int i,j,tam;


	FILE* arq = fopen("8.3.txt","w");

	for(i=0;i<10;i++)
	{
		printf("Escreva a Frase %d: ",(i+1));
		scanf("%s",frases[i]);

		tam = strlen(frases[i]);
		for(j=0;j<=tam;j++)
		{
			if(frases[i][j] == '\0')
			{
				break;
			}
			fputc(frases[i][j],arq);
		}
		printf("\n");
	}

	fclose(arq);
	return 0;
}
