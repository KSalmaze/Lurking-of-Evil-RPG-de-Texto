#ifndef MENUS_H
#define MENUS_H
#include "types.h"

int main_menu(t_imput imput);//controla o menu principal

int newgame(t_imput imput);//escolhe o save e retorna 1 para iniciar o jogo
void loadgame(t_imput imput);//escolha o save e se ele for válido retorna o slot de save + 1
void options(t_imput imput);//muda para o menu de opções
void credits();//mostra os créditos
int quit(t_imput imput);//fecha o jogo

#endif
