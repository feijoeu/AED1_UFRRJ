#include <stdio.h>

typedef struct {
    int cpf ;
    char nome[50];
    char endereco[50];
    char tel[10];
    float saldo;
} tcliente;

typedef struct {
    int capacidade;
    tcliente *dados;
    int topo;
} pilha;