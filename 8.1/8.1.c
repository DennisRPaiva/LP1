#include <stdio.h>
#include <string.h>

int main()
{
    int i,tamanho;
    char frase[25];
    
    FILE* arq = fopen("8.1.txt","w");

    printf("Digite a frase(sem espaços): \n");
    scanf("%s",frase);  // scanf("%[^\n]",frase); ---> assim pode-se usar espaços.
    tamanho = strlen(frase);


    for(i=0;i<(tamanho);i++)
    {
        fputc(frase[i],arq);
    }
    
    fclose(arq);
    return 0;
}
