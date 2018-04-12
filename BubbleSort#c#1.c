/*
Descricao: Bubble sort eh um simples algoritmo de ordenacao que funciona atraves da repeticao de passos atraves da lista que deve ser ordenada, comparando cada par de itens adjacentes e invertendo eles caso estejam na ordem incorreta.
Complexidade - O(n^2)
*/

#include <stdio.h>
#define MAXSIZE 10

void main()
{
	int vetor[MAXSIZE];
	int i, j, num, temp;

	printf("Digite a quantidade de numeros que deseja inserir: \n");
	scanf("%d", &num);

	printf("Digite os elementos, um de cada vez: \n");
	for (i = 0; i < num; i++)
	{
		printf("Elemento %d:", i+1);
		scanf("%d", &vetor[i]);
	}

   /*   Bubble sort iniciado */
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (vetor[j] > vetor[j + 1])
			{
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
	
	printf("O vetor ordenado ficou...\n");
	for (i = 0; i < num; i++)
	{
		printf("%d\n", vetor[i]);
	}
}

/*
Entrada: Digite a quantidade de numeros que deseja inserir:
6
Digite os elementos, um de cada vez:
23
45
67
89
12
34
*/
