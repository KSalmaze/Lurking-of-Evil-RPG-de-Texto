#ifndef INITIALIZERS_H
#define INITIALIZERS_H
#include "types.h"

void intro (t_input* input,t_map* map);//A��es necess�rias ao iniciar o jogo

int codetochar (char x);//Recebe um c�digo e retorna seu caractere;
char chartocode (int x);//Recebe um caractere e rotorna seu c�digo
char caps(char x);//Recebe uma letra e devolve sua vers�o em Caps
char capscode(int x);//Recebe o codigo de uma letra e devolve sua vers�o em Caps
int verificachar_letra(char x);//Verifica se � uma letra
int verificacode_letra(int x);//Verifica se � uma letra

#endif


