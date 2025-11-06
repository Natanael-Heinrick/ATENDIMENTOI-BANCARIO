#include <stdio.h>
#include "fila.h"

/*
=======================================
| MÓDULO FILA - RESPONSÁVEL: Pessoa 1 |
=======================================
Descrição: Este arquivo contém a implementação das operações de fila
para gerenciamento da ordem de atendimento dos clientes.

Tarefas Pendentes:
✅ Já implementado: inicializarFila(), filaVazia()
🔧 A implementar: enfileirar(), desenfileirar(), exibirFila()
Prazo de entrega sugerido: 06/11 até 08/11
*/

void inicializarFila(Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
    // TODO: verificar necessidade de iniciar todos os elementos
}

int filaVazia(Fila *f)
{
    return (f->inicio == f->fim);
}

int enfileirar(Fila *f, Cliente c)
{
    // TODO: Implementar lógica de inserção na fila
    // Exemplo:
    // 1️⃣ Verificar se a fila está cheia
    // 2️⃣ Inserir cliente na posição 'fim'
    // 3️⃣ Incrementar fim (com tratamento circular futuramente)
    printf("⚠️ Função enfileirar não implementada ainda.\n");
    return 0;
}

Cliente desenfileirar(Fila *f)
{
    // TODO: Implementar lógica de remoção da fila
    // 1️⃣ Verificar se está vazia
    // 2️⃣ Retornar cliente da posição 'inicio'
    // 3️⃣ Incrementar inicio
    printf("⚠️ Função desenfileirar não implementada ainda.\n");

    Cliente c = {"", 0, 0}; // Cliente vazio temporário
    return c;
}

void exibirFila(Fila *f)
{
    // TODO: Mostrar todos os clientes da fila
    printf("⚠️ Função exibirFila não implementada ainda.\n");
}
