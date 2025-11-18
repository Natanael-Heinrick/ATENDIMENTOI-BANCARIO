#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "fila.h"
#include "cliente.h"



void prioridadeParaCima(FilaPrioritaria *f, int i);
void prioridadeParaBaixo(FilaPrioritaria *f, int i);
void prioridadeParaBaixo(FilaPrioritaria *f, int i);
void trocar(Cliente *a, Cliente *b);
int pai(int i);
int filhoEsquerda(int i);
int filhoDireita(int i);

#endif
