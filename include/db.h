#ifndef DB_H
#define DB_H

#include <sqlite3.h>

extern sqlite3 *db; // Torna a variável global acessível para outros arquivos

int conectar_banco(const char *caminho);
int callback(void *NotUsed, int argc, char **argv, char **colName);

#endif