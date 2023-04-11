#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include "types.h"
#include "menus.h"
#include "Initializers.h"

int character_creation (t_player* player, int save,t_input input);//Criação de personagem

int main () {
int save;
t_player player[4];
t_input input;
t_map map;

setlocale(LC_ALL,"");

initialize_input(&input);
//initializer_map();

if (main_menu(input)==6)
 character_creation(&player,save,input);

return 0;
}

int character_creation (t_player* player, int save,t_input input){
int get;
char cc[2][13][50]={"Bem-Vindo a criação de persogem","Utilize as setas para navegar"," A  ","  Nome:","G","        d Idade  "," Jovem   Adulto   Velho"," A"," Genero (de nascença)","G"," Masculino   Feminino","X","Z"};
vector2 a;

 while (get < 1000){
   system("cls");
   for(int i=0;i<13;i++){
    printf("%s\n",cc[0][i]);
   }
}
   //system ("cls");

}
