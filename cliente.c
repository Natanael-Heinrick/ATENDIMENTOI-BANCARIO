#include <stdio.h>
#include "cliente.h"
#include "fila.h"
#include <string.h>

void cadastrarCliente(Fila *filaComum, FilaPrioritaria *filaPrioritaria)
{
    printf("\n=== CADASTRO DE CLIENTE ===\n");

    char nomeTmp[50];
    int idadeTmp;

    printf("\n=== CADASTRO DE CLIENTE ===\n");

    printf("Nome do Cliente: ");
    if (scanf("%49s", nomeTmp) != 1)
    {
        printf("⚠️ Erro na leitura do nome.\n");
        return;
    }

    printf("Idade do Cliente: ");
    if (scanf("%d", &idadeTmp) != 1)
    {
        printf("⚠️ Erro na leitura da idade. Tente novamente.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        return;
    }

    Cliente novoCliente;
    strcpy(novoCliente.nome, nomeTmp);
    novoCliente.idade = idadeTmp;

    novoCliente.prioridade = (idadeTmp >= 65);

    if (novoCliente.prioridade)
    {
        printf("✅ Cliente %s (idade %d) inserido na FILA PRIORITÁRIA.\n", novoCliente.nome, novoCliente.idade);
        inserirClientePrioritario(filaPrioritaria, novoCliente);
    }
    else
    {
        printf("✅ Cliente %s (idade %d) inserido na FILA COMUM.\n", novoCliente.nome, novoCliente.idade);
        enfileirar(filaComum, novoCliente);
    }
}
