/*
    NOME: DIOGO GOMES CASTRO
    PROFESSOR: ALEXANDRE
    TURMA: 2° PERÍODO - ADS

    Execícios Aula 10 - Fila de Prioridades
*/

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "structs.h"
#endif // FILA_H_INCLUDED

typedef struct Tfila
{
    solicitacao valor;
    struct Tfila *prox;
}Tfila;


typedef struct fila
{
    Tfila *inicio;
    Tfila *fim;
}fila;


//
//void createfila(fila *f);
//int fila_vazia(fila *f);
void insere_fila(fila *f, solicitacao *valor, pilha *p2);
void procurar_nome_fila(fila *f, char nome[]);
//int remove_fila(fila *f);
//void mostrar_fila(fila *f);
//int procurar_fila(fila *f, int valor);
//int remove_fila_especifico(fila *f, solicitacao valor);





