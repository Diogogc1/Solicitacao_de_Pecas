/*
    Nome: Diogo Gomes Castro
    Professor: Alexandre
    Turma: 2� Per�odo - ADS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
#include "structs.h"
#include "pilha.h"
#include "fila.h"

//======================================================================================
//======================================================================================
//======================================================================================

//PROT�TIPOS
//pecas solicitar(pecas pecas, solicitacao *solicitacao, pilha *p);
//pecas estoque(pecas pecas);

//======================================================================================
//======================================================================================
//======================================================================================

int main()
{
    //CONFIGURAR ACENTUA��O
    setlocale(LC_ALL,"Portuguese");

    int menu=0;

    solicitacao *solicitacao = malloc(sizeof(solicitacao));

    pilha *p = malloc(sizeof(pilha));
    create_pilha(p);

    pilha *p2 = malloc(sizeof(pilha));
    create_pilha(p2);

    fila *f = malloc(sizeof(fila));
    createfila(f);

    pecas pecas;
    pecas.hd = 3;
    pecas.cabo_rede = 3;
    pecas.monitor = 3;
    pecas.CPU = 3;

    while(menu != 5)
    {
        system("cls");
        printf("\n ======= TRABALHO I - ESTRUTURA DE DADOS ======= \n");
        printf("\n 1 - Fazer uma solita��o");
        printf("\n 2 - Solicita��es feitas");
        printf("\n 3 - Estoque");
        printf("\n 4 - Informa��es sobre o sistema");
        printf("\n 5 - SAIR");
        printf("\n\n Escolha o n�mero da op��o desejada: ");
        fflush(stdin);
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                pecas = solicitar(pecas, solicitacao, p, f, p2);
            break;

            case 2:
                relatorio(p, f, solicitacao, p2);
            break;

            case 3:
                pecas = estoque(pecas, p, f, p2);
            break;

            case 4:
                informar();
            break;

            case 5:
                printf("\n\n Saindo...");
                Sleep(500);
        }
    }

    printf("\n\n Fim do Algortimo! \n\n");
    return 0;
}
