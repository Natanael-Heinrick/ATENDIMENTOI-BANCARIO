#ifndef ERROR_H
#define ERROR_H

// Lista de códigos de erro usados no sistema
typedef enum {
    ERR_SUCESSO = 0,
    ERR_FILA_CHEIA,
    ERR_FILA_VAZIA,
    ERR_PILHA_CHEIA,
    ERR_PILHA_VAZIA,
    ERR_MEMORIA,
    ERR_CLIENTE_INVALIDO,
    ERR_DESCONHECIDO
} CodigoErro;

// ===============================
// Funções do módulo de erro
// ===============================

// Exibe uma mensagem descritiva na tela
void exibirErro(CodigoErro erro);

// Retorna texto correspondente ao erro
const char* erroToString(CodigoErro erro);

// (Opcional) inicialização de erros
void inicializarSistemaErros();

#endif
