#include <stdio.h>
#include "ordenacao.h"

/*
===============================================
| ORDENAÇÃO DAS FILAS - RESPONSÁVEL: Pessoa 4 |
===============================================

📌 Objetivo:
Aplicar um algoritmo de ordenação diretamente
NO ARRAY DA FILA

IMPORTANTE ⚠️:
Fila é um array CIRCULAR!
➡️ Pessoa 4 deve tratar índices com módulo (% MAX_FILA)

Sugestões de algoritmos:
✅ Prioritária: Bubble Sort (estrutura pequena)
✅ Comum: Insertion Sort (melhor para inserções)

------------------------------------------------
⚙️ REGRAS PARA ORDENAR
Fila Prioritária:
- Clientes prioritários sempre primeiro
- Dentro do grupo, ordenar por idade DESC (mais velho → primeiro)

Fila Comum:
- Manter ordem de chegada (não alterar posições antigas!)
- Insertion sort respeita melhor o histórico
------------------------------------------------
*/

// Auxiliar para acessar posições circulares
int idx(Fila *f, int pos)
{
    return (f->inicio + pos) % MAX_FILA;
}

void ordenarFilaPrioridade(Fila *fila)
{
    // TODO: implementar lógica de ordenação (Ex.: Bubble Sort)
    // Dica:
    // - Usar a função idx() para comparar e trocar clientes
    // - Utilizar fila->clientes[...] para manipular dados diretamente
}

void ordenarFilaComum(Fila *fila)
{
    // TODO: implementar lógica de ordenação (Ex.: Insertion Sort)
    // Dica:
    // - Manter a ordem de chegada ao máximo
    // - Usar idx() para percorrer o array circular
}

/*
Após a implementação:
Essas funções serão chamadas:
- Após o cadastro de um cliente
- Quando o usuário solicitar ordenação
- Antes do atendimento
*/
