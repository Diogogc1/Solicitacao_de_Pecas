#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "structs.h"

//fun��es
void create_pilha(pilha *p)
{
    p->topo =NULL;
}


//fun��o pilha vazia
int pilha_vazia(pilha *p)
{
    if(p->topo ==NULL)
        return 1; //Pilha est� vazia
    else
        return 0; //pilha tem elementos
}


void empilha(pilha *p, solicitacao *valor)
{
    Tpilha *novo=malloc(sizeof(Tpilha));
    novo->valor = *valor;
    novo->ant = p->topo;//anterior aponte para o de baixo
    p->topo = novo;

    novo=NULL;
    free(novo);
    return;
}

void mostrar_pilha(pilha *p)
{
    Tpilha *aux = malloc(sizeof(Tpilha));
    aux = p->topo;
    int i=1;

    if(pilha_vazia(p) == 1)
        printf("\n N�o h� solita��es com essa caracter�stica!");
    else
    {
        while(aux !=NULL)
        {
            printf("\n ======== %d� DA PILHA ======== \n", i);

            printf("\n Nome: %s",aux->valor.nome);

            if(aux->valor.cargo == 1)
                printf("\n Cargo: Diretor");
            else
                if(aux->valor.cargo == 2)
                    printf("\n Cargo: Gerente");
                else
                    if(aux->valor.cargo == 3)
                        printf("\n Cargo: Funcion�rio");


            printf("\n ID da m�quina: %d",aux->valor.id_maq);

            if(aux->valor.peca == 1)
                printf("\n Pe�a requisitada: HD");
            else
                if(aux->valor.peca == 2)
                    printf("\n Pe�a requisitada: Cabo de rede (1 metro)");
                else
                    if(aux->valor.peca == 3)
                        printf("\n Pe�a requisitada: Monitor");
                    else
                        if(aux->valor.peca == 4)
                            printf("\n Pe�a requisitada: CPU");

            printf("\n Problema da m�quina: %s",aux->valor.problema);
            printf("\n Situa��o: %s", aux->valor.status);

            aux=aux->ant;
            i++;
            printf("\n\n ============================= \n\n");
        }
        free(aux);
    }
}

void procurar_nome_pilha(pilha *p, char nome[])
{
    Tpilha *aux = malloc(sizeof(Tpilha));
    aux = p->topo;
    int i=1;
    int flag = 0;

    if(pilha_vazia(p) == 1)
        printf("\n N�o h� solita��es com essa caracter�stica!");
    else
    {
        while(aux !=NULL)
        {
            if(strcmp(aux->valor.nome, nome) == 0)
            {
                printf("\n ======== %d� DA PILHA ======== \n", i);
                printf("\n Nome: %s",aux->valor.nome);

                if(aux->valor.cargo == 1)
                    printf("\n Cargo: Diretor");
                else
                    if(aux->valor.cargo == 2)
                        printf("\n Cargo: Gerente");
                    else
                        if(aux->valor.cargo == 3)
                            printf("\n Cargo: Funcion�rio");


                printf("\n ID da m�quina: %d",aux->valor.id_maq);

                if(aux->valor.peca == 1)
                    printf("\n Pe�a requisitada: HD");
                else
                    if(aux->valor.peca == 2)
                        printf("\n Pe�a requisitada: Cabo de rede (1 metro)");
                    else
                        if(aux->valor.peca == 3)
                            printf("\n Pe�a requisitada: Monitor");
                        else
                            if(aux->valor.peca == 4)
                                printf("\n Pe�a requisitada: CPU");


                printf("\n Problema da m�quina: %s",aux->valor.problema);
                printf("\n Situa��o: %s", aux->valor.status);
                printf("\n\n ============================= \n\n");
                flag++;
            }
            aux=aux->ant;
            i++;
        }
        free(aux);

        if(flag == 0)
            printf("\n N�o h� solita��es com essa caracter�stica!");
    }
}


void desempilhar(pilha *p)
{
    Tpilha *aux = malloc(sizeof(Tpilha));
    aux = p->topo;
    p->topo = p->topo->ant;
    aux->ant = NULL;

    free(aux);
}

int procurar_pilha(pilha *p, int flag, int quant, fila *f, pilha *p2)
{
    Tpilha *aux = malloc(sizeof(Tpilha));
    Tpilha *aux2 = malloc(sizeof(Tpilha));
    aux = p->topo;
    int cont = 0;

    if(pilha_vazia(p) == 1)
        printf("\n N�o h� solita��es com essa caracter�stica!");
    else
    {
        while(aux != NULL && cont < quant)
        {
            if(aux->valor.peca == flag)
            {
                p->topo = aux->ant;
                aux2 = aux;
                aux2->ant = NULL;
                insere_fila(f, aux2, p2);
                cont++;
            }
            else
            {
                if(flag == 1 && aux->ant->valor.peca == 1)
                {
                    aux2 = aux->ant;
                    aux->ant = aux2->ant;
                    aux2->ant = NULL;
                    insere_fila(f, aux2, p2);
                    cont++;
                }
                else
                {
                    if(flag == 2 && aux->ant->valor.peca == 2)
                    {
                        aux2 = aux->ant;
                        aux->ant = aux2->ant;
                        aux2->ant = NULL;
                        insere_fila(f, aux2, p2);
                        cont++;
                    }
                    else
                    {
                        if(flag == 3 && aux->ant->valor.peca == 4)
                        {
                            aux2 = aux->ant;
                            aux->ant = aux2->ant;
                            aux2->ant = NULL;
                            insere_fila(f, aux2, p2);
                            cont++;
                        }
                        else
                        {
                            if(flag == 1 && aux->ant->valor.peca == 1)
                            {
                                aux2 = aux->ant;
                                aux->ant = aux2->ant;
                                aux2->ant = NULL;
                                insere_fila(f, aux2, p2);
                                cont++;
                            }
                        }
                    }
                }
            }
            aux=aux->ant;
        }
        free(aux);
        aux2 = NULL;
        free(aux2);
    }

    return cont;
}









