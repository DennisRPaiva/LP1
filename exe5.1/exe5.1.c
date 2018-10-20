#include <stdio.h>


int main(){
	int x,y;
	int* p;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x, y);
	if (x>y) // verifica o maior
	{
			p = &x;
			*p = (p-50); // modifica o ponteiro
	}
	else
	{
			p = &y;
			*p = (p-50);
	}

	printf("%d %d\n", x,y);// printa os valores finais	

	return 0;
}
