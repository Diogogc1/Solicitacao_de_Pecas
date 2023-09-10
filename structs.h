#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

typedef struct solicitacao
{
    char nome[40];
    int cargo;
    int id_maq;
    char problema[90];
    int peca;
    char status[30];
}solicitacao;

typedef struct pecas
{
    int hd;
    int cabo_rede;
    int monitor;
    int CPU;
}pecas;

typedef struct pilha pilha;
typedef struct fila fila;

//PROTÓTIPOS
pecas solicitar(pecas pecas, solicitacao *solicitacao, pilha *p, fila *f, pilha *p2);
pecas estoque(pecas pecas, pilha *p, fila *f, pilha *p2);
void  relatorio(pilha *p, fila *f, solicitacao *solicitacao, pilha *p2);
#endif// STRUCTS_H_INCLUDED
