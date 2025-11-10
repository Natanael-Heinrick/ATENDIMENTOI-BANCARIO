#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "fila.h"

// ===============================================
//  MÓDULO DE ORDENAÇÃO - RESPONSÁVEL: Pessoa 4
// Operações sobre FILAS para organização da ordem
// ===============================================

/*
Funções que a Pessoa 4 vai implementar:

 void ordenarFilaPrioridade(Fila *fila)
    - Ordenar clientes prioritários com base em critérios:
        Idade maior primeiro OU
        Tempo de chegada (manter ordem original)

 void ordenarFilaComum(Fila *fila)
    - Ordenar fila comum
        Menor tempo de espera mantém vantagem
        Exemplo: insertion sort para manter ordenação incremental
*/

// Declaração das funções:
void ordenarFilaPrioridade(Fila *fila);
void ordenarFilaComum(Fila *fila);

#endif
