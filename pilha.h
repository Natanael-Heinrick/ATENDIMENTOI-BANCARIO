#ifndef PILHA_H
#define PILHA_H

#include "cliente.h"
#include "error.h"


// ===========================================
// 📌 MÓDULO PILHA - RESPONSÁVEL: Pessoa 2
// Histórico de atendimentos
// ===========================================

// 👇 Definir tamanho máximo do histórico
#define MAX_HISTORICO 100

// Estrutura da Pilha
typedef struct
{
    Cliente historico[MAX_HISTORICO];
    int topo;
} Pilha;

/*
Funções obrigatórias — a implementar:

✅ void inicializarPilha(Pilha *p)
    - topo deve iniciar em -1

✅ int pilhaVazia(Pilha *p)
    - retornar 1 se vazia, 0 se não

✅ int pilhaCheia(Pilha *p)
    - retornar 1 se cheia, 0 se não

✅ int empilhar(Pilha *p, Cliente c)
    - se não estiver cheia
    - adicionar c no topo
    - retornar 1 se ok, 0 se erro

✅ Cliente desempilhar(Pilha *p)
    - se vazia, retornar Cliente vazio (nome "", idade 0, prioridade 0)
    - remover e retornar cliente do topo

✅ void exibirPilha(Pilha *p)
    - imprimir histórico do topo para base
*/

void inicializarPilha(Pilha *p);
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);
int empilhar(Pilha *p, Cliente c);
Cliente desempilhar(Pilha *p);
void exibirPilha(Pilha *p);

#endif
