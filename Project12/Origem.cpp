#include<stdio.h>
#include<stdlib.h>

void funcaop(int *fpnt) {

	*fpnt = *fpnt + 10;
	printf("Usando a funcao com o ponteiro a variavel vai ser: %d\n\n", *fpnt);
}

int main() {

	int m, i, vet[10], vetb[10];
	int *pnt[10], *pntaux[10];

	printf("Quantos numeros voce vai digitar: ");
	scanf_s("%d", &m);

	for ( i = 0; i < m; i++)
	{
		printf("Digite um numero - %d : ", i+1);
		scanf_s("%d", &vet[i]);
		pnt[i] = &vet[i];
	}

	for ( i = 0; i < m; i++)
	{
		printf("Localizacao X = %p, Valor X = %d\n ", &vet[i], vet[i]);
		printf("Localizacao Y (&pnt) = %p, Valor Y (pnt) = %p, Ponteiro (*pnt) Y = %d \n ", &pnt[i], pnt[i], *pnt[i]);

		printf("Voce digitou o numero %d\n\n", *pnt[i]);
	}
	for ( i = 0; i < m; i++)
	{
		printf("Troque o valor de -  %d que eh = %d : ", i + 1, *pnt[i]);
		scanf_s("%d", &vetb[i]);
		pntaux[i] = &vet[i];
		*pntaux[i] = vetb[i];
	}
	printf("\n\n");
	for ( i = 0; i < m; i++)
	{
		printf("Agora o velor de %d eh: %d\n", i + 1,vet[i]);

		printf("Localizacao X = %p, Valor X = %d\n ", &vet[i], vet[i]);
		printf("Localizacao Y (&pnt) = %p, Valor Y (pnt) = %p, Ponteiro (*pnt) Y = %d \n ", &pnt[i], pnt[i], *pnt[i]);

		funcaop(&vet[i]);
	}

	for (i = 0; i < m; i++)
	{
		printf("Localizacao X = %p, Valor X = %d\n ", &vet[i], vet[i]);
		printf("Localizacao Y (&pnt) = %p, Valor Y (pnt) = %p, Ponteiro (*pnt) Y = %d \n ", &pnt[i], pnt[i], *pnt[i]);

		printf("Voce digitou o numero %d\n\n", *pnt[i]);
	}


	system("pause");
	return 0;
}