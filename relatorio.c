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


void relatorio(pilha *p, fila *f, solicitacao *solicitacao, pilha *p2)
{
    int menu;
    char nome[40];

    while(menu != 5)
    {
        system("cls");
        printf("\n ========= RELAT�RIO ========= \n");
        printf("\n 1 - Aguardando pe�as");
        printf("\n 2 - Aguardando atendimento");
        printf("\n 3 - Filtrar por nome");
        printf("\n 4 - Solita��es atendidas");
        printf("\n 5 - SAIR");
        printf("\n\n Escolha o n�mero da op��o para filtrar a busca: ");
        do
        {
            fflush(stdin);
            scanf("%d", &menu);

            if(menu < 1 || menu > 5)
                printf("\n\n Op��o Inv�lida! Digite outra: ");

        }while(menu < 1 || menu > 5);

        printf("\n");

        if(menu == 5)
        {
            printf("\n Saindo..");
            Sleep(400);
        }
        else
        {
            if(menu == 1)
            {
                mostrar_pilha(p);
                printf("\n\n Pressione qualquer tecla para voltar ao menu \n");
                getch();
            }
            else
            {
                if(menu == 2)
                {
                    mostrar_fila(f);
                    printf("\n\n Pressione qualquer tecla para voltar ao menu \n");
                    getch();
                }
                else
                {
                    if(menu == 3)
                    {
                        printf("\n Digite seu nome para filtrar: ");
                        fflush(stdin);
                        gets(nome);

                        printf("\n\n ========== SOLICITA��ES AGUARDANDO PE�AS ========== \n");
                        procurar_nome_pilha(p, nome);

                        printf("\n\n\n ======= SOLICITA��ES AGUARDANDO ATENDIMENTO ======= \n");
                        procurar_nome_fila(f, nome);

                        printf("\n\n\n ============= SOLICITA��ES ATENDIDAS ============= \n");
                        procurar_nome_pilha(p2, nome);

                        printf("\n\n\n Pressione qualquer tecla para voltar ao menu \n");
                        getch();
                    }
                    else
                    {
                        mostrar_pilha(p2);
                        printf("\n\n Pressione qualquer tecla para voltar ao menu \n");
                        getch();
                    }
                }
            }
        }
    }
}
