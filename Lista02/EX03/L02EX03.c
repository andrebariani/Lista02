/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 2

	Lista 02 - Exercício 03 - Conversao Binaria

	Instrucoes
	----------

	Este arquivo contem o codigo que auxiliara no desenvolvimento do
	exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
	Dados do aluno:

	RA: 743506
	Nome: Andre Matheus Bariani Trava

* ================================================================== */

/* <<< ESCREVA SEU CODIGO AQUI >>> */

#include <stdio.h>

#define MAX 100000

void bin(int n, int bs[], int aux);

int main()
{
	int n, aux = 0, flg = 0;
	int binstack[MAX];

	for(int i = 0 ; i < MAX ; i++)
		binstack[i] = 0;

	scanf("%d", &n);

	if(n == 0)
	{
		printf("%d", n);
		return 0;
	}

	bin(n, binstack, aux);

	for(int i = MAX ; i >= 0 ; i--)
	{
		if(binstack[i] == 1 || flg == 1)
		{
			if(flg == 0)
				flg++;

			printf("%d", binstack[i]);
		}
	}

	// printf("\n");

	return 0;
}

void bin(int n, int bs[], int aux)
{
	if (n == 1)
	{
		bs[aux] = bs[aux] + 1;
		// printf("(n = %d)Inserting 1 in binstack[%d] = %d\n", n, aux, bs[aux]);
	}
	else if(((n % 2) == 1))
	{
		bs[aux] =  bs[aux] + 1;
		// printf("(n = %d)Inserting 1 in binstack[%d] = %d\n", n, aux, bs[aux]);
		return bin((n / 2), bs, aux + 1);
	}
	else if((n % 2 == 0))
	{
		// printf("(n = %d)Inserting 0 in binstack[%d] = %d\n", n, aux, bs[aux]);
		return bin((n / 2), bs, aux + 1);
	}

}
