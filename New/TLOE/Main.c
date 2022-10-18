#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "menu.h"

typedef struct {
int teste;
int life;
int strengh;
int intelligence;
int sanity;
int charisma;
int resistance;
int luck;
}t_atributes;

typedef struct {
t_atributes atributes;

}t_player;

typedef struct {
char complete;
char atual;
int colider;
int eventos;
}t_map;

typedef struct {
int top;
int down;
int left;
int right;
}imput;

void intro ();//Ações necessárias ao iniciar o jogo
int character_creation (t_player* player, int save);//Criação de personagem

int main () {

int save;
t_player player[4];

if (main_menu()==6)
 character_creation(&player,save);

return 0;
}

void intro (){
}

int character_creation (t_player* player, int save){
    system ("cls");
}
