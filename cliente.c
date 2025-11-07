#include <stdio.h>
#include "cliente.h"
#include "fila.h"

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

    // Esse void acima serve para evitar warning de variável não usada.

    // ⚠️ A Lógica real do cadastro deve ser implementada futuramente!
    // Dicas para quem for implementar:
    //
    // char nomeTmp[50];
    // int idadeTmp;
    //
    // printf("Nome: ");
    // scanf("%s", nomeTmp);
    //
    // printf("Idade: ");
    // scanf("%d", &idadeTmp);
    //
    // Cliente novoCliente;
    // strcpy(novoCliente.nome, nomeTmp);
    // novoCliente.idade = idadeTmp;
    // novoCliente.prioridade = (idadeTmp >= 65);
    //
    // if(novoCliente.prioridade)
    //     enfileirar(filaPrioritaria, novoCliente);
    // else
    //     enfileirar(filaComum, novoCliente);

    printf("⚠️ Função ainda não implementada. (Tarefa de casa!)\n");
}
