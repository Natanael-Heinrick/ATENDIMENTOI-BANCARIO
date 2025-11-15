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




typedef struct filaPrioritaria {
    Cliente *array;
    int tamanho;
    int capacidade;
} FilaPrioritaria;

FilaPrioritaria* criarFilaPrioritaria(int capacidade);


void inicializarFila(Fila *f);
int  filaVazia(Fila *f);
int  enfileirar(Fila *f, Cliente c);
Cliente desenfileirar(Fila *f);
void exibirFila(Fila *f);

void inserirClientePrioritario(FilaPrioritaria *f, Cliente cliente); // O(log n)
Cliente removerClientePrioritario(FilaPrioritaria *f); // O(log n)
int filaPrioritariaVazia(FilaPrioritaria *f);
void exibirFilaPrioritaria(FilaPrioritaria *f);

#endif
