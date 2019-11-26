#ifndef CSV_H
#define CSV_H

#include "main.h"

/* Escreve as cores dos nós */
void write_graph (Grafo* grafo);
/* Conta a quantidade de linhas num arquivo */
int count_lines (FILE* stream);
/* Lê o CSV de entrada e retorna o Grafo */
Grafo* read_csv (char* filename);

#endif