#ifndef LOCACOES_H
#define LOCACOES_H

#include "clientes.h"

typedef struct {
    int IDCliente;
    char Filme[50];
} Locacao;

void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente *clientes, int totalClientes);
void listarLocacoes(Locacao *locacoes, int totalLocacoes);
void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente);

#endif
