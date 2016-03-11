#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Ant = 0, Num = 0, Suc = 0;

	printf("Adicione um numero ");
	scanf_s("%d", &Num);

	Ant = Num - 1;
	Suc = Num + 1;

	printf("O numero eh: %d\n", Ant);
	printf("O Sucesor eh: %d\n", Suc);

	system("pause");
	return 0;



}
