#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "menu.h"

char menu[6][50]={"       MENU    ","     Novo Jogo    ","     Carregar    ","      Opcoes      ","     Creditos    ","       Sair      "};

void main_menu(){

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
    printf("NJ");
    getch();
    break;
case 2:
    printf("CJ");
    getch();
    break;
case 3:
    printf("OP");
    getch();
    break;
case 4:
    printf("CR");
    getch();
    break;
case 5:
    printf("QT");
    getch();
    break;
default:
    system("cls");
   }
  }
 }
}

