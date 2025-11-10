#include <stdio.h>
#include "cliente.h"
#include "fila.h"
#include <string.h>


/*
===========================================
| MÓDULO CLIENTE - RESPONSÁVEL: Pessoa 3 |
===========================================
Função: Cadastrar cliente e inserir na fila correta.

Tarefas Pendentes:
Ler dados do cliente via teclado:
    - Nome
    - Idade
    - Definir prioridade (ex: >= 65 anos)
Criar struct Cliente com os dados
Inserir na fila adequada com enfileirar()

Prazo de entrega sugerido: 08/11 até 09/11
*/

void cadastrarCliente(Fila *filaComum, Fila *filaPrioritaria)
{
    printf("\n=== CADASTRO DE CLIENTE ===\n");

    // Esse void deve ser tira a partir do momento que a função for implementada
    (void)filaComum;
    (void)filaPrioritaria;

    char nomeTmp[50];
    int idadeTmp;

    printf("\n=== CADASTRO DE CLIENTE ===\n");

    printf("Nome do Cliente: ");
    if (scanf("%49s", nomeTmp) != 1) {
        printf("⚠️ Erro na leitura do nome.\n");
        return;
    }

    printf("Idade do Cliente: ");
    if (scanf("%d", &idadeTmp) != 1) {
        printf("⚠️ Erro na leitura da idade. Tente novamente.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        return;
    }

    Cliente novoCliente;
    strcpy(novoCliente.nome, nomeTmp); 
    novoCliente.idade = idadeTmp;
    
    
    novoCliente.prioridade = (idadeTmp >= 65); 

    if (novoCliente.prioridade) {
        printf("✅ Cliente %s (idade %d) inserido na FILA PRIORITÁRIA.\n", novoCliente.nome, novoCliente.idade);
        enfileirar(filaPrioritaria, novoCliente);
    } else {
        printf("✅ Cliente %s (idade %d) inserido na FILA COMUM.\n", novoCliente.nome, novoCliente.idade);
        enfileirar(filaComum, novoCliente);
    }
}
