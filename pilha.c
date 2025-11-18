#include <stdio.h>
#include <string.h>
#include "pilha.h"

/*
===========================================
| MÓDULO PILHA - RESPONSÁVEL: Pessoa 2   |
===========================================
Função: Armazenar histórico de clientes atendidos

📌 IMPORTANTE:
- Histórico é uma PILHA — Último que entra, primeiro que sai (LIFO)
- O atendimento enviará cada cliente atendido para essa pilha
*/

// Inicializar pilha: topo inicia em -1
void inicializarPilha(Pilha *p)
{
    // TODO: implementar
}

// Retorna 1 se pilha estiver vazia
int pilhaVazia(Pilha *p)
{
    // TODO: implementar
    return 0;
}

// Retorna 1 se pilha estiver cheia
int pilhaCheia(Pilha *p)
{
    // TODO: implementar
    return 0;
}

// Empilha um cliente
int empilhar(Pilha *p, Cliente c)
{
    // TODO: implementar
    // Dica: verificar se está cheia antes
    // Caso cheia: imprimir erro e retornar 0
    return 1;
}

// Desempilha: retorna o cliente mais recente
Cliente desempilhar(Pilha *p)
{
    // TODO: implementar
    // Dica: se vazia, retornar Cliente vazio
    Cliente vazio = {"", 0, 0};
    return vazio;
}

// Exibe histórico do atendimento (do topo → base)
void exibirPilha(Pilha *p)
{
    // TODO: implementar
    // Dica: mostrar ordem do mais recente para o mais antigo
}
