# Solicitacao_de_Pecas
Sistema desenvolvido como parte de uma prova de Estrutura de Dados, utiliza pilha e fila.

É um sistema que simula um sistema de T.I de uma instituição, possiblitando algumas ações nas abas abaixo, essas informações estão disponíveis dentro do sistema também.

 ============================== 1 - (SOLICITAÇÃO) ==============================

 1 - (SOLICITAÇÃO) Nessa aba são feitas as solicitações

 1.1 - Ápos a solitação o sistema verificia se há a peça necessária disponível, caindo em 2 casos possíveis:

 1.2 - Se a peça estiver disponível, a solicitação vai para uma fila de espera para atendimento, que tem priridade por cargo.

 1.2.1 - Se a última pessoa que tiver feito a solicitação tiver um cargo maior que a primeira da fila de espera para atendimento, ela passa na frente,
 se não ela vai para o fim.

 1.3 - Se a peça não estiver disponível, a solicitação vai para uma pilha para aguardar a peça chegar.


 =============================== 2 - (RELATÓRIO) ===============================

 2 - (RELATÓRIO) Nessa aba é possível gerar relatório com os seguintes filtros:

 2.1 - Solicitações que estão na fila de espera para atendimento.

 2.2 - Solicitações que estão na pilha aguardando a chegada de peças.

 2.3 - Filtrar solicitações pelo nome de uma pessoa que fez uma ou mais solitações.

 2.4 - Solicitações que já foram atendidas.
 

 ================================ 3 - (ESTOQUE) ================================

 3 - (ESTOQUE) Nessa aba é possível ver o estoque e adicionar peças

 3.1 - Com relação a adicionar peças:

 3.1.1 - Foi adicionado uma ou mais peças e há solitações aguardando sua chegada, se isso ocorrer, o sistema fará o seguinte:

 3.1.2 - A solitação será enviada para a fila de espera de atendimento e retirada da pilha de espera de peças.

 3.1.3 - Quando houver essa transferência, o sistema oberverá a prioridade do cargo para saber se a solitação será inserida no início ou no fim da fila.

 3.1.4 - Se a solitação que está sendo transferida, tiver a mesma prioridade da que está no início da fila, ela ocupará o lugar dela.

 3.1.5 - A solitação que estava no início antes será enviada para uma pilha de solitações prontas, pois ela tinha a mesma prioridade da que chegou, por isso ela foi atendida primeiro.


 ====================== 4 - (INFORMACÕES SOBRE O SISTEMA) ======================

 4 - (INFORMACÕES SOBRE O SISTEMA) Nessa aba tem informações importantes sobre o funcionamento desse sistema
