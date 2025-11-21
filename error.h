#ifndef ERROR_H
#define ERROR_H

/*
 * Código de erro centralizado para o sistema bancário.
 * Use esses códigos como retorno das funções (ou converta para int se preferir).
 */
typedef enum {
    ERRO_NENHUM = 0,        // Sem erro
    ERRO_FILA_CHEIA,       // Tentar enfileirar em fila cheia
    ERRO_FILA_VAZIA,       // Tentar desenfileirar de fila vazia
    ERRO_PILHA_CHEIA,      // Push em pilha cheia
    ERRO_PILHA_VAZIA,      // Pop em pilha vazia
    ERRO_MEMORIA,          // Falha de alocação dinâmica
    ERRO_CLIENTE_INVALIDO, // Dados do cliente inválidos
    ERRO_INDEX_FORA,       // Índice fora do intervalo
    ERRO_DESCONHECIDO      // Qualquer erro não previsto
} CodigoErro;

/*
 * exibirErro: imprime uma mensagem amigável para o usuário (stdout).
 * - Ideal para ser chamada por camadas de interface (ex: main).
 */
void exibirErro(CodigoErro erro);

/*
 * erroToString: retorna uma string (const char*) curta representando o erro.
 * - Útil para logs, retorno em interfaces gráficas, ou testes.
 */
const char* erroToString(CodigoErro erro);

#endif // ERROR_H
