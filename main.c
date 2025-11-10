#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"
#include "cliente.h"
#include "ordenacao.h"

// Funções de outros módulos
void cadastrarCliente(Fila *comum, Fila *prioritaria);
void atenderCliente(Fila *prioritaria, Fila *comum, Pilha *historico);
// depois será adicionado: funções de ordenação

void menu()
{
    printf("\n==== SISTEMA BANCÁRIO ====\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Atender Cliente\n");
    printf("3 - Exibir Fila\n");
    printf("4 - Exibir Histórico\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int main()
{
    Fila filaComum, filaPrioritaria;
    Pilha historico;
    int opcao;

    inicializarFila(&filaComum);
    inicializarFila(&filaPrioritaria);
    inicializarPilha(&historico);

    do
    {
        menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCliente(&filaComum, &filaPrioritaria);
            break;
        case 2:
            atenderCliente(&filaPrioritaria, &filaComum, &historico);
            break;
        case 3:
            ordenarFilaPrioridade(&filaPrioritaria);
            ordenarFilaComum(&filaComum);

            printf("\n--- Fila Prioritária ---\n");
            exibirFila(&filaPrioritaria);
            printf("\n--- Fila Comum ---\n");
            exibirFila(&filaComum);
            break;
        case 4:
            exibirPilha(&historico);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}