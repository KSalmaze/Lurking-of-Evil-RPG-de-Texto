#ifndef MENUS_H
#define MENUS_H
#include "types.h"

int main_menu(t_input input);//controla o menu principal

int newgame(t_input input);//escolhe o save e retorna 1 para iniciar o jogo
void loadgame(t_input input);//escolha o save e se ele for válido retorna o slot de save + 1
void options(t_input input);//muda para o menu de opções
void credits();//mostra os créditos
int quit(t_input input);//fecha o jogo
int escolhe_save(t_input input);//Escolhe um slot de save e retorna o seu valor

#endif
