#include <string.h>
#include "cliente.h"

void criar_cliente(Cliente* c, char* nome, int idade, int prioridade) {
    strcpy(c->nome, nome);
    c->idade = idade;
    c->prioridade = prioridade;
    // Valores padrão para criação manual
    strcpy(c->id, "MANUAL");
    strcpy(c->tipo, prioridade ? "preferencial" : "comum");
    c->tempo_atendimento = 15;
    c->horario_chegada_min = 0;
}
