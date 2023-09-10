#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include "structs.h"

//structs

typedef struct Tpilha{
    solicitacao valor;
    struct Tpilha *ant;//ponteiro anterior
}Tpilha;


typedef struct pilha{
    Tpilha *topo;
}pilha;


//protótipos das funções
void    create_pilha(pilha *p);
int     pilha_vazia(pilha *p);
void    empilha(pilha *p, solicitacao *valor);
void    mostrar_pilha(pilha *p);
void    procurar_nome_pilha(pilha *p, char nome[]);
void    desempilhar(pilha *p);
int    procurar_pilha(pilha *p, int flag, int quant, fila *f, pilha *p2);

#endif // PILHA_H_INCLUDED
