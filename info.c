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

void informar()
{
    system("cls");
    printf("\n ================== INFORMA��ES IMPORTANTES SOBRE ESSE SOFTWARE: ================== \n");


    printf("\n\n\n ============================== 1 - (SOLICITA��O) ============================== \n");

    printf("\n\n 1 - (SOLICITA��O) Nessa aba s�o feitas as solicita��es");

    printf("\n\n 1.1 - �pos a solita��o o sistema verificia se h� a pe�a necess�ria dispon�vel, caindo em 2 casos poss�veis:");

    printf("\n\n 1.2 - Se a pe�a estiver dispon�vel, a solicita��o vai para uma fila de espera para atendimento, que tem priridade por cargo.");

    printf("\n\n 1.2.1 - Se a �ltima pessoa que tiver feito a solicita��o tiver um cargo maior que a primeira da fila de espera para atendimento, ela passa na frente,\n se n�o ela vai para o fim.");

    printf("\n\n 1.3 - Se a pe�a n�o estiver dispon�vel, a solicita��o vai para uma pilha para aguardar a pe�a chegar.");


    printf("\n\n\n\n =============================== 2 - (RELAT�RIO) =============================== \n");

    printf("\n\n 2 - (RELAT�RIO) Nessa aba � poss�vel gerar relat�rio com os seguintes filtros:");

    printf("\n\n 2.1 - Solicita��es que est�o na fila de espera para atendimento.");

    printf("\n\n 2.2 - Solicita��es que est�o na pilha aguardando a chegada de pe�as.");

    printf("\n\n 2.3 - Filtrar solicita��es pelo nome de uma pessoa que fez uma ou mais solita��es.");

    printf("\n\n 2.4 - Solicita��es que j� foram atendidas.");


    printf("\n\n\n\n ================================ 3 - (ESTOQUE) ================================ \n");

    printf("\n\n 3 - (ESTOQUE) Nessa aba � poss�vel ver o estoque e adicionar pe�as");

    printf("\n\n 3.1 - Com rela��o a adicionar pe�as:");

    printf("\n\n 3.1.1 - Foi adicionado uma ou mais pe�as e h� solita��es aguardando sua chegada, se isso ocorrer, o sistema far� o seguinte:");

    printf("\n\n 3.1.2 - A solita��o ser� enviada para a fila de espera de atendimento e retirada da pilha de espera de pe�as.");

    printf("\n\n 3.1.3 - Quando houver essa transfer�ncia, o sistema oberver� a prioridade do cargo para saber se a solita��o ser� inserida no in�cio ou no fim da fila.");

    printf("\n\n 3.1.4 - Se a solita��o que est� sendo transferida, tiver a mesma prioridade da que est� no in�cio da fila, ela ocupar� o lugar dela.");

    printf("\n\n 3.1.5 - A solita��o que estava no in�cio antes ser� enviada para uma pilha de solita��es prontas, pois ela tinha a mesma prioridade da que chegou, por isso ela foi atendida primeiro.");


    printf("\n\n\n\n ====================== 4 - (INFORMAC�ES SOBRE O SISTEMA) ====================== \n");

    printf("\n\n 4 - (INFORMAC�ES SOBRE O SISTEMA) Nessa aba tem informa��es importantes sobre o funcionamento desse sistema");

    printf("\n\n\n\n Pressione qualuer tecla para voltar ao menu");
    getch();
}
