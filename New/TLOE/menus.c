#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "menus.h"
#include "types.h"

//char menu[6][50]={"       MENU    ","     Novo Jogo    ","     Carregar    ","      Opcoes      ","     Creditos    ","       Sair      "};

int main_menu(t_imput imput){
char menu[6][50]={"       MENU    ","     Novo Jogo    ","     Carregar    ","      Opcoes      ","     Creditos    ","       Sair      "};
int get=1;
int old_escolha;
int escolha=1;

while (get < 10000) {

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

get = getch();

if (get == imput.top && escolha != 1)
    escolha--;
if (get == imput.down && escolha != 5)
    escolha++;

if(old_escolha != escolha){
menu[old_escolha][0]=' ';
menu[old_escolha][1]=' ';
menu[old_escolha][17]=' ';
menu[old_escolha][18]=' ';
}

if (get == imput.enter1 || get == imput.enter2) {
switch (escolha){
case 1:
    return 6;
    break;
case 2:
    loadgame(imput);
    getch();
    break;
case 3:
    options(imput);
    break;
case 4:
    credits();
    break;
case 5:
    if (quit(imput)==0)
       return 0;
    break;
default:
    system("cls");
   }
  }
 }
}

int newgame(t_imput imput){

}

void loadgame(t_imput imput){
escolhe_save(imput);

}

void options(t_imput imput){
system("cls");
printf("Futuramente vai dar pra personalizar as teclas e\nalterar a linguagem");
getch();
}

void credits(){
system("cls");
printf("Tudo: Pedro Salmaze\nArte: Raul Biazotto\n\nAgradecimentos Especiais\n Joao Pedro Macaro");
getch();
}

int quit(t_imput imput){
int escolha=0;//controla a posição escolhida no menu
int get;//armazena o imput do usuário

while (escolha < 1000){

system ("cls");
printf("\n   Tem certeza que deseja sair?\n");

if(escolha==0)
    printf("        -> Sim <-\n           Nao   \n\n\n\n");
else
    printf("           Sim   \n        -> Nao <-\n\n\n\n");

get=getch(); //imput

if(get == imput.enter1 || get == imput.enter2){
    if(escolha==0)
        return 0;//fecha o jogo
    else {
        return 69;//retorna para o menu principal
    }
}

if(get == imput.top && escolha != 0)
    escolha--;
if(get == imput.down && escolha != 1)
    escolha++;
}
}

int escolhe_save(t_imput imput){
char menu[6][70]={{"Escolha um slot de salvamento"},{" "},{"        Slot 1   "},{"        Slot 2   "},{"        Slot 3   "},{"        Slot 4   "}};
int get=3;
int escolha=1;
int old_escolha;

while (get>-10){
{//Parte gráfica

    menu[escolha+1][0]='-';
    menu[escolha+1][1]='>';
    menu[escolha+1][17]='<';
    menu[escolha+1][18]='-';

    system("cls");
    for(int i=0;i<6;i++){
        printf("%s\n",menu[i]);
    }
    get = getch();
    old_escolha=escolha;

    if (get ==  imput.top && escolha != 1)
        escolha--;
    if (get == imput.down && escolha != 4)
        escolha++;

   // if(old_escolha != escolha){
        menu[old_escolha+1][0]=' ';
        menu[old_escolha+1][1]=' ';
        menu[old_escolha+1][17]=' ';
        menu[old_escolha+1][18]=' ';
    // }
old_escolha=escolha;
}
}
}
