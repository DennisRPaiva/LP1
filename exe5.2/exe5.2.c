#include <stdio.h>

void compra(int* conta, int valor){
	*conta = *conta - valor;
	printf("saldo final da conta de maior valor: %d\n",*conta);
}


int main(){
	int minha_conta,minha_conta2,valor=500;
	int* conta;
	scanf("%d %d",&minha_conta,&minha_conta2);
	if (minha_conta>minha_conta2)
	{
			conta = &minha_conta;
			compra(conta,valor);
	}
	else
	{
			conta = &minha_conta2;
			compra(conta,valor);
	}
	printf("saldo final %d %d\n",minha_conta,minha_conta2);
	
}
