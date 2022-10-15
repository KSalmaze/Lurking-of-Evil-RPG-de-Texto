#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "menu.h"

//char menu[6][50]={"       MENU    ","     Novo Jogo    ","     Carregar    ","      Opcoes      ","     Creditos    ","       Sair      "};

int main_menu(){
char menu[6][50]={"       MENU    ","     Novo Jogo    ","     Carregar    ","      Opcoes      ","     Creditos    ","       Sair      "};
int action=1;
int old_escolha;
int escolha=1;

while (action < 10000) {

menu[escolha][0]='-';
menu[escolha][1]='>';
menu[escolha][17]='<';
menu[escolha][18]='-';

{//Parte Gráfica
    system ("cls");
    for (int i=0;i<6;i++){
       printf("%s\n",menu[i]);
    }
}
old_escolha=escolha;

action = getch();

if (action == 119 && escolha != 1)
    escolha--;
if (action == 115 && escolha != 5)
    escolha++;

if(old_escolha != escolha){
menu[old_escolha][0]=' ';
menu[old_escolha][1]=' ';
menu[old_escolha][17]=' ';
menu[old_escolha][18]=' ';
}

if (action == 32 || action == 13) {
switch (escolha){
case 1:
    return 6;
    break;
case 2:
    printf("CJ");
    getch();
    break;
case 3:
    options();
    break;
case 4:
    credits();
    break;
case 5:
    if (quit()==0)
       return 0;
    break;
default:
    system("cls");
   }
  }
 }
}

int newgame(){

}

void loadgame(){

}

void options(){
system("cls");
printf("Futuramente vai dar pra personalizar as teclas e\nalterar a linguagem");
getch();
}

void credits(){
system("cls");
printf("Tudo: Pedro Salmaze\nArte: Raul Biazotto\n\nAgradecimentos Especiais\n Joao Pedro Macaro");
getch();
}

int quit(){
int escolha=0;
int get;

while (escolha < 1000){

system ("cls");
printf("\n   Tem certeza que deseja sair?\n");

if(escolha==0)
    printf("        -> Sim <-\n           Nao   \n\n\n\n");
else
    printf("           Sim   \n        -> Nao <-\n\n\n\n");

get=getch();

if(get == 32 || get == 13){
    if(escolha==0)
        return 0;
    else {
        return 2;
    }
}

if(get == 119 && escolha != 0)
    escolha--;
if(get == 115 && escolha != 1)
    escolha++;
}
}
