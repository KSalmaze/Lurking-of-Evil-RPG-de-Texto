#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "menu.h"

void intro ();//A��es necess�rias ao iniciar o jogo
int character_creation ();//Cria��o de personagem

typedef struct t_atributes {
int teste;
int life;
int strengh;
int intelligence;
int sanity;
int charisma;
int resistance;
int luck;
};
typedef struct t_player {
struct t_atributes atributes;

};

typedef struct t_map {
char complete;
char atual;
int colider;
int eventos;
};

int main () {

main_menu();

return 0;
}

void basic (){
}

int character_creation (){
}
