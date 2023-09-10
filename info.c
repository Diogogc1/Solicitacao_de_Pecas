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
#include <windows.h>
#include "structs.h"
#include "pilha.h"
#include "fila.h"

void informar()
{
    system("cls");
    printf("\n ================== INFORMAÇÕES IMPORTANTES SOBRE ESSE SOFTWARE: ================== \n");


    printf("\n\n\n ============================== 1 - (SOLICITAÇÃO) ============================== \n");

    printf("\n\n 1 - (SOLICITAÇÃO) Nessa aba são feitas as solicitações");

    printf("\n\n 1.1 - Ápos a solitação o sistema verificia se há a peça necessária disponível, caindo em 2 casos possíveis:");

    printf("\n\n 1.2 - Se a peça estiver disponível, a solicitação vai para uma fila de espera para atendimento, que tem priridade por cargo.");

    printf("\n\n 1.2.1 - Se a última pessoa que tiver feito a solicitação tiver um cargo maior que a primeira da fila de espera para atendimento, ela passa na frente,\n se não ela vai para o fim.");

    printf("\n\n 1.3 - Se a peça não estiver disponível, a solicitação vai para uma pilha para aguardar a peça chegar.");


    printf("\n\n\n\n =============================== 2 - (RELATÓRIO) =============================== \n");

    printf("\n\n 2 - (RELATÓRIO) Nessa aba é possível gerar relatório com os seguintes filtros:");

    printf("\n\n 2.1 - Solicitações que estão na fila de espera para atendimento.");

    printf("\n\n 2.2 - Solicitações que estão na pilha aguardando a chegada de peças.");

    printf("\n\n 2.3 - Filtrar solicitações pelo nome de uma pessoa que fez uma ou mais solitações.");

    printf("\n\n 2.4 - Solicitações que já foram atendidas.");


    printf("\n\n\n\n ================================ 3 - (ESTOQUE) ================================ \n");

    printf("\n\n 3 - (ESTOQUE) Nessa aba é possível ver o estoque e adicionar peças");

    printf("\n\n 3.1 - Com relação a adicionar peças:");

    printf("\n\n 3.1.1 - Foi adicionado uma ou mais peças e há solitações aguardando sua chegada, se isso ocorrer, o sistema fará o seguinte:");

    printf("\n\n 3.1.2 - A solitação será enviada para a fila de espera de atendimento e retirada da pilha de espera de peças.");

    printf("\n\n 3.1.3 - Quando houver essa transferência, o sistema oberverá a prioridade do cargo para saber se a solitação será inserida no início ou no fim da fila.");

    printf("\n\n 3.1.4 - Se a solitação que está sendo transferida, tiver a mesma prioridade da que está no início da fila, ela ocupará o lugar dela.");

    printf("\n\n 3.1.5 - A solitação que estava no início antes será enviada para uma pilha de solitações prontas, pois ela tinha a mesma prioridade da que chegou, por isso ela foi atendida primeiro.");


    printf("\n\n\n\n ====================== 4 - (INFORMACÕES SOBRE O SISTEMA) ====================== \n");

    printf("\n\n 4 - (INFORMACÕES SOBRE O SISTEMA) Nessa aba tem informações importantes sobre o funcionamento desse sistema");

    printf("\n\n\n\n Pressione qualuer tecla para voltar ao menu");
    getch();
}
