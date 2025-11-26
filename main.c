#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "dados_clientes.h"
#include "cliente.h"
#include "fila.h"
#include "pilha.h"
#include "ordenacao.h"
#include "importacao.h"

void menu() {
    printf("\n=== SISTEMA BANCARIO ===\n");
    printf("1. Cadastrar Cliente Manual\n");
    printf("2. Importar Clientes de CSV\n");
    printf("3. Atender Cliente\n");
    printf("4. Exibir Filas\n");
    printf("5. Exibir Historico\n");
    printf("0. Sair\n");
    printf("Escolha: ");
}

// Função para carregar os dados do header para as filas
void carregarDadosEstaticos(Fila *filaComum, MaxHeap *filaPrioritaria) {
    printf("\n--- Carregando dados estáticos (Hardcoded) ---\n");
    
    for (int i = 0; i < TOTAL_CLIENTES_ESTATICOS; i++) {
        Cliente c = lista_clientes_estatica[i];
        
        // Se for preferencial, manda pro Heap
        if (c.prioridade == 1) {
            inserirClientePreferencial(filaPrioritaria, c);
            printf("[HEAP] %s (Idade: %d)\n", c.nome, c.idade);
        } 
        // Se for comum ou corporativo, manda pra Fila
        else {
            enfileirar(filaComum, c);
            printf("[FILA] %s (Tipo: %s)\n", c.nome, c.tipo);
        }
    }
    printf("--- Carga Completa: %d clientes carregados ---\n", TOTAL_CLIENTES_ESTATICOS);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    Fila filaComum;
    inicializarFila(&filaComum);
    
    MaxHeap* heapPrioritaria = criarHeap(MAX_FILA); 
    
    Pilha historico;
    inicializarPilha(&historico);
    
    int opcao;
    
    
    
    do {
        menu();
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1: {
                char nome[50];
                int idade;
                printf("Nome: ");
                // Consumir o \n que sobrou do scanf anterior
                getchar(); 
                // Lê linha inteira (aceita espaços)
                scanf("%49[^\n]", nome);
                
                printf("Idade: ");
                scanf("%d", &idade);
                
                Cliente c;
                criar_cliente(&c, nome, idade, (idade >= 60)); // Prioridade se >= 60
                
                if (c.prioridade) {
                    inserirClientePreferencial(heapPrioritaria, c);
                    printf("Cliente inserido na Fila Prioritaria.\n");
                } else {
                    enfileirar(&filaComum, c);
                    printf("Cliente inserido na Fila Comum.\n");
                }
                break;
            }
            case 2:
                // Nome do arquivo fixo ou pode pedir ao usuário
               // importarCSV("clientes_teste_50_20251123223600.csv", &filaComum, heapPrioritaria);
               carregarDadosEstaticos(&filaComum, heapPrioritaria);
                break;
                
            case 3:
                // Atende Heap primeiro
                if (!heapVazio(heapPrioritaria)) {
                    Cliente c = removerClientePreferencial(heapPrioritaria);
                    printf("\n>>> ATENDENDO PREFERENCIAL: %s (Idade: %d)\n", c.nome, c.idade);
                    empilhar(&historico, c);
                } 
                // Se Heap vazio, atende Fila
                else if (!filaVazia(&filaComum)) {
                    Cliente c = desenfileirar(&filaComum);
                    printf("\n>>> ATENDENDO COMUM: %s (Tipo: %s)\n", c.nome, c.tipo);
                    empilhar(&historico, c);
                } else {
                    printf("\nNao ha clientes para atender.\n");
                }
                break;
                
            case 4:
                exibirHeap(heapPrioritaria);
                printf("\n");
                exibirFila(&filaComum);
                break;
                
            case 5:
                exibirHistorico(&historico);
                break;
                
            case 0:
                printf("Encerrando...\n");
                break;
                
            default:
                printf("Opcao invalida.\n");
        }
        
    } while(opcao != 0);

    free(heapPrioritaria->array);
    free(heapPrioritaria);

    return 0;
}
