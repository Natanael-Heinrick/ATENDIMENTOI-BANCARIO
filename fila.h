#ifndef FILA_H
#define FILA_H

#define MAX_FILA 100

typedef struct cliente
{
    char nome[50];
    int idade;
    int prioridade;
} Cliente;

typedef struct fila
{
    Cliente clientes[MAX_FILA];
    int inicio;
    int fim;
} Fila;

void inicializarFila(Fila *f);
int  filaVazia(Fila *f);
int  enfileirar(Fila *f, Cliente c);
Cliente desenfileirar(Fila *f);
void exibirFila(Fila *f);

#endif
