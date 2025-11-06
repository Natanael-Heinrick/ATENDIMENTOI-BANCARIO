#ifndef FILA_H
#define FILA_H

// Estrutura básica da fila
typedef struct cliente
{
    char nome[50];
    int idade;
    int prioridade;
} Cliente;

typedef struct fila
{
    Cliente clientes[100]; // sem dinâmica, só esqueleto
    int inicio;
    int fim;
} Fila;

// Funções mínimas (assinaturas apenas)
void inicializarFila(Fila *f);
int filaVazia(Fila *f);
int enfileirar(Fila *f, Cliente c);
Cliente desenfileirar(Fila *f);
void exibirFila(Fila *f);

#endif