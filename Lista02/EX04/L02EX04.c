/* ================================================================== *
	Universidade Federal de Sao Carlos - UFSCar, Sorocaba

	Disciplina: Algoritmos e Programação 2

	Lista 02 - Exercício 04 - Recursao em Matrizes

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

#define MAX 100

#define OPCAO_OBTER_MENOR   1
#define OPCAO_OBTER_MAIOR   2
#define OPCAO_OBTER_SOMA    3
#define OPCAO_NOVA_MATRIZ   4
#define OPCAO_SAIR          5

int m, n;
int matriz[MAX][MAX];

int obter_menor(int i);
int obter_maior(int i);
int obter_soma(int i);

int main() {
    int i, j, opcao, nova_matriz;

    while (scanf("%d %d", &m, &n) > 0 && m > 0 && n > 0) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < m; ++j)
                scanf("%d", &matriz[i][j]);
        }

        nova_matriz = 0;
        while (!nova_matriz && scanf("%d", &opcao) > 0) {
            switch(opcao) {
            case OPCAO_OBTER_MENOR:
                printf("%d\n", obter_menor(0));
                break;
            case OPCAO_OBTER_MAIOR:
                printf("%d\n", obter_maior(0));
                break;
            case OPCAO_OBTER_SOMA:
                printf("%d\n", obter_soma(0));
                break;
            case OPCAO_NOVA_MATRIZ:
                nova_matriz = 1;
                break;
            case OPCAO_SAIR:
                return 0;
            }
        }
    }

    return (0);
}


int obter_menor(int i) {
    if(i >= (m*n) - 1) {
        // printf("Last item found! (matriz[%d][%d] for the %d time)\n", n - 1, m - 1, i);
        return matriz[n - 1][m - 1];
    }
    // printf("Acessing matriz[%d][%d] for the %d time\n", i / m, i % m, i);
    int num = obter_menor(i + 1);
    if(matriz[i / m][i % m] < num) {
        return matriz[i / m][i % m];
    }
    else
        return num;
}

int obter_maior(int i) {
    if(i >= (m*n) - 1) {
        // printf("Last item found! (matriz[%d][%d] for the %d time)\n", n - 1, m - 1, i);
        return matriz[n - 1][m - 1];
    }
    // printf("Acessing matriz[%d][%d] for the %d time\n", i / m, i % m, i);
    int num = obter_maior(i + 1);
    if(matriz[i / m][i % m] > num) {
        return matriz[i / m][i % m];
    }
    else
        return num;
}

int obter_soma(int i) {
    // if(m == n) {
    if(i >= (m*n) - 1) {
        // printf("Last item found! (matriz[%d][%d] for the %d time)\n", n - 1, m - 1, i);
        return matriz[n - 1][m - 1];
    }
    // printf("Acessing matriz[%d][%d] for the %d time\n", i / m, i % m, i);
    return matriz[i / m][i % m] + obter_soma(i + 1);
    // }
    // else if(m > n) {
    //     if(i > m*n)
    //         return matriz[m][n];
    //     return matriz[i / m][i % n] + obter_soma(i + 1);
    // }
    // else {
    //     if(i > m*n)
    //         return matriz[m][n];
    //     return matriz[i / m][i % n] + obter_soma(i + 1);
    // }
}
