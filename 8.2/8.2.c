#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frase[25],ch;
	int tam,i;

	FILE* arq = fopen("8.1.txt","r");

	for(i = 0; i<25;i++)
	{
		while( (ch=fgetc(arq))!= EOF )
		{
  			putchar(ch);
		}
	}

	fclose(arq);
	return 0;
}
