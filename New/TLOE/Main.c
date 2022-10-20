#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "types.h"
#include "menus.h"
#include "Initializers.h"


void intro ();//Ações necessárias ao iniciar o jogo
int character_creation (t_player* player, int save);//Criação de personagem

int main () {

int save;
t_player player[4];
t_imput imput;

initializer_imput(&imput);
//initializer_map();

if (main_menu(imput)==6)
 character_creation(&player,save);

return 0;
}

void intro (){
}

int character_creation (t_player* player, int save){
    system ("cls");
    printf ("Bem vindo a criação de personagem\n");
}
