#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"
#include "cliente.h"
#include "ordenacao.h"


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
    Fila filaComum;
    FilaPrioritaria *filaPrioritaria;
    Pilha historico;
    int opcao;
    inicializarFila(&filaComum);

    filaPrioritaria = criarFilaPrioritaria(MAX_FILA);

    inicializarPilha(&historico);

    do
    {
        menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCliente(&filaComum, filaPrioritaria);
            break;
        case 2:
           // atenderCliente(&filaPrioritaria, &filaComum, &historico);
            break;
        case 3:


            printf("\n--- Fila Prioritária ---\n");
            exibirFilaPrioritaria(filaPrioritaria);
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
    free(filaPrioritaria->array);
    free(filaPrioritaria);
    return 0;
}
