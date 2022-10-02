#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int character_creation ();
void basic ();
void menu ();

typedef struct Satributes {
int teste;
int life;
int strengh;
int intelligence;
int sanity;
int charisma;
int resistance;
int luck;
};

typedef struct Splayer {
struct Satributes atributes;
char arma[20];

};

int main () {

basic();
menu();

return 0;
}

void basic (){
}

void menu(){
int action;

printf("MENU\n");
printf("1-Novo Jogo\n");
printf("2-Carregar Jogo\n");
printf("3-Configuracoes\n");
printf("4-Creditos\n");
printf("5-Sair\n");

switch (action){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
default:
    system("cls");
}
}

int character_creation (){
}
