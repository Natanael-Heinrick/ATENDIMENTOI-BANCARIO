#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct {
    char id[10];                // ID do CSV
    char nome[50];
    char tipo[20];              // "preferencial", "comum", "corporativo"
    int idade;                  // Usado para ordenação no Heap
    int prioridade;             // 1 = Prioritário (Heap), 0 = Comum (Fila)
    int tempo_atendimento;      // Em minutos
    int horario_chegada_min;    // Horário convertido em minutos
} Cliente;

// Função auxiliar para criação manual
void criar_cliente(Cliente* c, char* nome, int idade, int prioridade);

#endif
