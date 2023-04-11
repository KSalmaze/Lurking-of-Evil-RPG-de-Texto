#ifndef INITIALIZERS_H
#define INITIALIZERS_H
#include "types.h"

void intro (t_input* input,t_map* map);//Ações necessárias ao iniciar o jogo

int codetochar (char x);//Recebe um código e retorna seu caractere;
char chartocode (int x);//Recebe um caractere e rotorna seu código
char caps(char x);//Recebe uma letra e devolve sua versão em Caps
char capscode(int x);//Recebe o codigo de uma letra e devolve sua versão em Caps
int verificachar_letra(char x);//Verifica se é uma letra
int verificacode_letra(int x);//Verifica se é uma letra

#endif


