#ifndef MENU_H
#define MENU_H

int main_menu();//controla o menu principal

int newgame();//escolhe o save e retorna 1 para iniciar o jogo
void loadgame();//escolha o save e se ele for v�lido retorna o slot de save + 1
void options();//muda para o menu de op��es
void credits();//mostra os cr�ditos
int quit();//fecha o jogo

#endif
