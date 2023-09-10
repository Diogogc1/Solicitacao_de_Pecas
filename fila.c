/*
    NOME: DIOGO GOMES CASTRO
    PROFESSOR: ALEXANDRE
    TURMA: 2� PER�ODO - ADS

    Exec�cios Aula 10 - Fila de Prioridades
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
//================================================================

void createfila(fila *f){
  f->inicio = NULL;
  f->fim    = NULL;
}

//================================================================

int fila_vazia(fila *f)
{
    if(f->inicio==NULL)
        return 1; //fila vazia
    else
        return 0; //fila n�o est� vazia
}

//================================================================
                //2A    ,    30
void insere_fila(fila *f, solicitacao *valor, pilha *p2)
{

    Tfila *novo= malloc(sizeof(Tfila));
    Tfila *aux = malloc(sizeof(Tfila));
    novo->valor = *valor;
    novo->prox = NULL;


    if(fila_vazia(f)==1) //primeira vez na fila
    {
        f->inicio = novo;
        f->fim    = novo;
    }
    else
    {
        if(novo->valor.cargo <= f->inicio->valor.cargo)
        {
            novo->prox = f->inicio->prox;
            f->inicio->prox = NULL;
            empilha(p2, f->inicio->valor);
            aux = f->inicio;
            f->inicio = novo;
            strcpy(f->inicio->valor.status, "Atendida");

            if(f->fim == aux)
            {
                f->fim = f->inicio;
            }
            printf("\n\n Uma solicita��o foi entendida! Por conta da sua prioridade");
        }
        else
        {
            f->fim->prox = novo;
            f->fim = novo; //ajusta o ponteiro do fim
        }
    }

    free(aux);
    novo=NULL;
    free(novo);
}

//================================================================

                //2A
//int remove_fila(fila *f)
//{
//    int valor;
//
//    Tfila *aux = malloc(sizeof(Tfila));
//
//    aux = f->inicio; //aux aponta para o inicio da fila
//
//    valor = aux->dado; //guardando o valor na vari�vel
//
//    f->inicio = aux->prox; //ajustando o ponteiro do inicio
//
//
//    aux->prox = NULL;
//
//    if(f->inicio==NULL) //verifico se existe um s� elemento
//    {
//        f->fim=NULL;
//        free(aux);
//    }
//    else
//    {
//        free(aux);
//    }
//
//    return valor;
//}

//================================================================

void mostrar_fila(fila *f){

    Tfila *aux=malloc(sizeof(Tfila));

    aux = f->inicio;
    int i=1;

    if(fila_vazia(f) == 1)
        printf("\n N�o h� solita��es com essa caracter�stica!");
    else
    {
        while(aux!= NULL)
        {
            printf("\n ======== %d� DA FILA ======== \n", i);
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
            printf("\n\n ============================ \n\n");

            aux=aux->prox;
            i++;
        }
        free(aux);
    }
}

//================================================================

void procurar_nome_fila(fila *f, char nome[])
{
    Tfila *aux=malloc(sizeof(Tfila));

    aux = f->inicio;
    int i=1;
    int flag = 0;

    if(fila_vazia(f) == 1)
        printf("\n N�o h� solita��es com essa caracter�stica!");
    else
    {
        while(aux!= NULL)
        {
            if(strcmp(aux->valor.nome, nome) == 0)
            {
                printf("\n ======== %d� DA FILA ======== \n", i);
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
                printf("\n\n ============================ \n\n");
                flag++;
            }

            aux=aux->prox;
            i++;
        }
        free(aux);

        if(flag == 0)
            printf("\n N�o h� solita��es com essa caracter�stica!");
    }
}

//================================================================

//int procurar_fila(fila *f, int valor)
//{
//    Tfila *aux=malloc(sizeof(Tfila));
//    int x=0;
//
//    aux = f->inicio;
//
//    while(aux != NULL)
//    {
//        if(valor == aux->dado)
//        {
//            x=1;
//        }
//        aux=aux->prox;
//    }
//    free(aux);
//
//    return x;
//}

//================================================================
//int remove_fila_especifico(fila *f, int valor)
//{
//    Tfila *aux=malloc(sizeof(Tfila));
//    Tfila *aux2=malloc(sizeof(Tfila));
//    int x=0;
//
//    aux = f->inicio;
//
//    if(valor == aux->dado)
//    {
//        f->inicio = aux->prox;
//        aux = NULL;
//        free(aux);
//    }
//    else
//    {
//        while(valor != aux->prox->dado)
//        {
//            aux=aux->prox;
//        }
//
//        aux2 = aux->prox;
//
//        aux->prox = aux2->prox;
//        aux2->prox = NULL;
//
//        aux = NULL;
//        free(aux);
//        free(aux2);
//    }
//
//    return valor;
//}



