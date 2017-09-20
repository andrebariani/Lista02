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

	RA:
	Nome:

* ================================================================== */

/* <<< ESCREVA SEU CODIGO AQUI >>> */

#include <stdio.h>

int bin(int n, int b);
int inv(int n)
int main()
{
		int n;

		scanf("%d", &n);

		printf("%d\n", bin(n, 1));

		return 0;
}

int bin(int n, int b)
{
		if(n == 0)
		{
				b = inv(b);
				return b;
		}
		if(n == 1)
		{
				b++;
				b = inv(b);
				return b;
		}
		if(n % 2)
		{
				bin( (n/2) , (b*10) )
		}
		else
		{
				bin( (n/2) , ((b + 1)*10) )
		}
}

int inv(int n)
{
		
}
