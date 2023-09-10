/*
    Nome: Diogo Gomes Castro
    Professor: Alexandre
    Turma: 2° Período - ADS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include "structs.h"
#include "pilha.h"

//======================================================================================
//======================================================================================
//======================================================================================

pecas gerenciar_estoque(pecas pecas, int *hd, int *cabo_rede, int *monitor, int *cpu)
{
    int menu = 0;
    int quant;

    while(menu != 5)
    {
        system("cls");
        printf("\n ====== ADICIONAR PEÇAS ===== \n");
        printf("\n 1 - HD");
        printf("\n 2 - Cabo de Rede (mestros)");
        printf("\n 3 - Monitor");
        printf("\n 4 - CPU");
        printf("\n 5 - SAIR");
        printf("\n\n Escolha o número da peça para adicionar: ");
        do
        {
            fflush(stdin);
            scanf("%d", &menu);

            if(menu < 1 || menu > 5)
                printf("\n\n Número Inválido! Digite outro: ");
        }while(menu < 1 || menu > 5);

        if(menu == 1)
        {
            printf("\n Digite a quantidade de HDs a serem adicionados: ");
            do
            {
                fflush(stdin);
                scanf("%d", &quant);

                if(menu < 1)
                    printf("\n\n Quantidade Inválida! Digite outra: ");
            }while(menu < 1);

            pecas.hd = pecas.hd + quant;
            *hd = pecas.hd;
        }
        else
            if(menu == 2)
            {
                printf("\n Digite os metros de cabo de rede a serem adicionadas: ");
                do
                {
                    fflush(stdin);
                    scanf("%d", &quant);

                    if(menu < 1)
                        printf("\n\n Quantidade Inválida! Digite outra: ");
                }while(menu < 1);

                pecas.cabo_rede = pecas.cabo_rede + quant;
                *cabo_rede = pecas.cabo_rede;
            }
            else
                if(menu == 3)
                {
                    printf("\n Digite a quantidade de monitores a serem adicionados: ");
                    do
                    {
                        fflush(stdin);
                        scanf("%d", &quant);

                        if(menu < 1)
                            printf("\n\n Quantidade Inválida! Digite outra: ");
                    }while(menu < 1);

                    pecas.monitor = pecas.monitor + quant;
                    *monitor = pecas.monitor;
                }
                else
                    if(menu == 4)
                    {
                        printf("\n Digite a quantidade de CPUs a serem adicionadas: ");
                        do
                        {
                            fflush(stdin);
                            scanf("%d", &quant);

                            if(menu < 1)
                                printf("\n\n Quantidade Inválida! Digite outra: ");
                        }while(menu < 1);

                        pecas.CPU = pecas.CPU + quant;
                        *cpu = pecas.CPU;
                    }
    }

    return pecas;
}
//======================================================================================
//======================================================================================
//======================================================================================

void mostrar_pecas(pecas pecas)
{
    system("cls");
    printf("\n ========= ESTOQUE ========= \n");
    printf("\n HD: %d", pecas.hd);
    printf("\n Cabo de Rede (metros): %d", pecas.cabo_rede);
    printf("\n Monitor: %d", pecas.monitor);
    printf("\n CPU: %d", pecas.CPU);

    printf("\n\n Pressione qualquer tecla para voltar ao menu de estoque");
    getch();
}

//======================================================================================
//======================================================================================
//======================================================================================

pecas estoque(pecas pecas, pilha *p, fila *f, pilha *p2)
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    int menu=0;
    int hd=0, cabo_rede=0, monitor=0, cpu=0, cont=0;

    while(menu != 3)
    {
        system("cls");
        printf("\n ==================== ESTOQUE ==================== \n");
        printf("\n 1 - Ver Estoque");
        printf("\n 2 - Adicionar peças (Acesse apenas se você trabalhar no estoque!)");
        printf("\n 3 - SAIR");
        printf("\n\n Escolha o número da opção desejada: ");
        do
        {
            fflush(stdin);
            scanf("%d", &menu);

            if(menu < 1 || menu > 3)
                printf("\n\n Número Inválido! Digite outro: ");
        }while(menu < 1 || menu > 3);



        if(menu == 3)
        {
            printf("\n Saindo..");
            Sleep(400);
        }
        else
        {

            if(menu == 1)
            {
                mostrar_pecas(pecas);
            }
            else
                if(menu == 2)
                {
                    pecas = gerenciar_estoque(pecas, &hd, &cabo_rede, &monitor, &cpu);


                    if(hd != 0)
                    {
                        cont = procurar_pilha(p, 1, hd, f, p2);

                        printf("\n\n Com a chegada do(s) novo(s) HD(s), %d solitação(ões) que precisava(m) dessa peça foram para lista de espera para serem atendidas", cont);

                        pecas.hd = pecas.hd - cont;
                    }

                    if(cabo_rede != 0)
                    {
                        cont = procurar_pilha(p, 2, cabo_rede, f, p2);

                        printf("\n\n Com a chegada do(s) novo(s) metro(s) de cabo de rede, %d solitação(ões) que precisava(m) dessa peça foram para lista de espera para serem atendidas", cont);

                        pecas.cabo_rede = pecas.cabo_rede - cont;
                    }
                    if(monitor != 0)
                    {
                        cont = procurar_pilha(p, 3, monitor, f, p2);

                        printf("\n\n Com a chegada do(s) novo(s) monitor(es), %d solitação(ões) que precisava(m) dessa peça foram para lista de espera para serem atendidas", cont);

                        pecas.monitor = pecas.monitor - cont;
                    }
                    if(cpu != 0)
                    {
                        cont = procurar_pilha(p, 4, cpu, f, p2);

                        printf("\n\n Com a chegada da(s) nova(s) CPU(s), %d solitação(ões) que precisava(m) dessa peça foram para lista de espera para serem atendidas", cont);

                        pecas.CPU = pecas.CPU - cont;
                    }

                    printf("\n\n\n Pressione qualquer tecla para voltar ao menu de estoque");
                    getch();
                }
        }
    }

    return pecas;
}
