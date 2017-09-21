/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 2

	Lista 02 - Exercício 02 - Conjectura de Collatz

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

int collatz(int n);

int main()
{
		int n;

		scanf("%d", &n);

		printf("%d", collatz(n));

		return 0;
}

int collatz(int n)
{
		if(n == 1)
		{
				return 1;
		}

		printf("%d ", n);

		if((n % 2) == 0)
		{
				n /= 2;
				return collatz(n);
		}
		else
		{
				n *= 3;
				n += 1;
				return collatz(n);
		}
}
