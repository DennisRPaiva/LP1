#include <stdio.h>
#include <string.h>

void troca(int* conta, int* conta2)
{
	int temp;
	temp = *conta;
	*conta = *conta2;
	*conta2 = temp;

	//printf("contas trocadas: %d %d.\n",*conta, *conta2);
}

int main(){
	int minha_conta,minha_conta2;
	//int* conta;
	printf("Digite valores das contas:");
	scanf("%d %d",&minha_conta,&minha_conta2);
    printf("contas originais: %d %d.\n",minha_conta, minha_conta2);

    troca(&minha_conta,&minha_conta2);
    printf("contas trocadas: %d %d.\n",minha_conta, minha_conta2);
}
