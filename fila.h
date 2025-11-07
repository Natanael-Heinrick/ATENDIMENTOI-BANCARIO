#ifndef FILA_H
#define FILA_H

// Capacidade da fila
#define MAX_FILA 100

// Estrutura básica do cliente
typedef struct cliente
{
    char nome[50];
    int idade;
    int prioridade;
} Cliente;

// Estrutura da fila (buffer circular)
typedef struct fila
{
    Cliente clientes[MAX_FILA];
    int inicio;
    int fim;
} Fila;

// Funções do módulo Fila
void inicializarFila(Fila *f);
int  filaVazia(Fila *f);
int  enfileirar(Fila *f, Cliente c);
Cliente desenfileirar(Fila *f);
void exibirFila(Fila *f);

#endif
