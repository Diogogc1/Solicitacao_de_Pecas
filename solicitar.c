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
#include "fila.h"

pecas solicitar(pecas pecas, solicitacao *solicitacao, pilha *p, fila *f, pilha *p2)
{
    //CONFIGURAR ACENTUAÇÃO
    setlocale(LC_ALL,"Portuguese");

    system("cls");
    printf("\n ===== SOLICITAÇÃO ===== \n");
    printf("\n Digite seu nome: ");
    fflush(stdin);
    gets(solicitacao->nome);

    printf("\n 1 - Diretor");
    printf("\n 2 - Gerente");
    printf("\n 3 - Funcionário");
    printf("\n\n Escolha o seu cargo: ");
    do
    {
        fflush(stdin);
        scanf("%d", &solicitacao->cargo);

        if(solicitacao->cargo < 1 || solicitacao->cargo > 3)
            printf("\n\n Opção Inválida! Digite outra: ");

    }while(solicitacao->cargo < 1 || solicitacao->cargo > 3);

    printf("\n Digite o número identificador dessa máquina (1 ao 200): ");
    do
    {
        fflush(stdin);
        scanf("%d", &solicitacao->id_maq);

        if(solicitacao->id_maq < 1 || solicitacao->id_maq > 200)
            printf("\n\n Opção Inválida! Digite outra: ");

    }while(solicitacao->id_maq < 1 || solicitacao->id_maq > 200);


    //SELECIONAR PEÇA
    printf("\n\n Qual a peça necessária para o reparo?");
    printf("\n 1 - HD");
    printf("\n 2 - Cabo de rede (1 metro)");
    printf("\n 3 - Monitor");
    printf("\n 4 - CPU");
    printf("\n\n Digite o número da peça desejada: ");
    do
    {
        fflush(stdin);
        scanf("%d", &solicitacao->peca);

        if(solicitacao->peca < 1 || solicitacao->peca > 4)
            printf("\n\n Opção Inválida! Digite outra: ");

    }while(solicitacao->peca < 1 || solicitacao->peca > 4);


    printf("\n\n Relate o problema da máquina: ");
    fflush(stdin);
    gets(solicitacao->problema);

    if(solicitacao->peca == 1)
    {
        if(pecas.hd == 0)
        {
            printf("\n\n Essa peça não está disponível, sua solitação ficará em estado de espera até que ela esteja disponível");

            strcpy(solicitacao->status, "Aguardando peça");

            //EMPILHAR
            empilha(p, solicitacao);
        }
        else
        {
            printf("\n\n Peça disponível! Sua solitação entrará na fila de espera");
            pecas.hd--;

            strcpy(solicitacao->status, "Aguardando atendimento");;

            //ENFILERAR
            insere_fila(f, solicitacao, p2);
        }
    }
    else
    {
        if(solicitacao->peca == 2)
        {
            if(pecas.cabo_rede == 0)
            {
                printf("\n\n Essa peça não está disponível, sua solitação ficará em estado de espera até que ela esteja disponível");

                strcpy(solicitacao->status, "Aguardando peça");

                //EMPILHAR
                empilha(p, solicitacao);
            }
            else
            {
                printf("\n\n Peça disponível! Sua solitação entrará na fila de espera");
                pecas.cabo_rede--;

                strcpy(solicitacao->status, "Aguardando atendimento");;

                //ENFILERAR
                insere_fila(f, solicitacao, p2);
            }
        }
        else
        {
            if(solicitacao->peca == 3)
            {
                if(pecas.monitor == 0)
                {
                    printf("\n\n Essa peça não está disponível, sua solitação ficará em estado de espera até que ela esteja disponível");


                    strcpy(solicitacao->status, "Aguardando peça");

                    //EMPILHAR
                    empilha(p, solicitacao);
                }
                else
                {
                    printf("\n\n Peça disponível! Sua solitação entrará na fila de espera");
                    pecas.monitor--;

                    strcpy(solicitacao->status, "Aguardando atendimento");;

                    //ENFILERAR
                    insere_fila(f, solicitacao, p2);
                }
            }
            else
                if(solicitacao->peca == 4)
                {
                    if(pecas.CPU == 0)
                    {
                        printf("\n\n Essa peça não está disponível, sua solitação ficará em estado de espera até que ela esteja disponível");

                        strcpy(solicitacao->status, "Aguardando peça");
                        //EMPILHAR
                        empilha(p, solicitacao);

                    }
                    else
                    {
                        printf("\n\n Peça disponível! Sua solitação entrará na fila de espera");
                        pecas.CPU--;

                        strcpy(solicitacao->status, "Aguardando atendimento");;

                        //ENFILERAR
                        insere_fila(f, solicitacao, p2);
                    }
                }
        }
    }
            printf("\n\n\n Pressione qualquer tecla para retornar ao menu principal \n");
            getch();

    return pecas;
}
