/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 2

	Lista 02 - Exercício 01 - Coeficiente Binomial

	Instrucoes
	----------

	Este arquivo contem o codigo que auxiliara no desenvolvimento do
	exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
	Dados do aluno:

	RA: 743506
	Nome: Andre Matheus Bariani Trava

* ================================================================== */

#include <stdio.h>

double coefbin(double n, double k);
double fat(double n);

int main()
{
		double n, k, res;

		scanf("%lf %lf", &n, &k);

		res = coefbin(n, k);

		printf("%.0lf\n", res);

		return 0;
}



double coefbin(double n, double k)
{
		return (fat(n)/(fat(k)*fat(n - k)));
}

double fat(double n)
{
		if(n == 0)
				return 1;
		else if(n == 1)
				return 1;
		else
				return n*fat(n-1);

}
