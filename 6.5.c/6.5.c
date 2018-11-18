#include <string.h>

int strlen2(char* str){
    int cont=0,i = 0;
    while (str[i] != '\0'){
        cont++;
        i++;
    }
    return cont;
}

char* strjoin2(char* batman1, char* batman2)
{
    int i = 0;
    int tam1 = strlen2(batman1);
    int tam2 = strlen2(batman2);
    char dest[tam1+tam2+1];

    for(i;i<tam1;i++)
    {
        dest[i] = batman1[i];
    }
    int aux = 0;
    for(i = tam1,i<tam1+tam2;i++)
    {
        dest[i] = batman2[aux];
        aux++;
    }
    dest[tam1+tam2] = '\0';
    
    return dest;
}



int main()
{
    char origem1[10] = "abcdef";
    char origem2[12] = "zxywut";

   char* destino = strjoin2(origem1,origem2);
    printf("string final: %s\n",destino);
}
