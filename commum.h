#ifndef COMMUM_H_INCLUDED
#define COMMUM_H_INCLUDED
#endif // COMMUM_H_INCLUDED

//STRUCTS.H
typedef struct solicitacao
{
    char nome[40];
    char cargo[40];
    int id_maq[4];
    char problema[90];
    int quant;
    int peca;
}solicitacao;


typedef struct pecas
{
    int hd;
    int cabo_rede;
    int monitor;
    int CPU;
}pecas;

//PROTÓTIPOS
pecas solicitar(pecas pecas, solicitacao *solicitacao, pilha *p);
pecas estoque(pecas pecas);

//=================================================================================================

//PILHA.H


//structs
typedef struct Tpilha{
    int valor;
    struct Tpilha *ant;//ponteiro anterior
}Tpilha;



typedef struct pilha{
    Tpilha *topo;
}pilha;



//protótipos das funções
void    create_pilha(pilha *p);
int     pilha_vazia(pilha *p);
void    empilha(pilha *p,int valor);
void    mostrar_pilha(pilha *p);
void    desempilhar(pilha *p);



#endif // PILHA_H_INCLUDED

