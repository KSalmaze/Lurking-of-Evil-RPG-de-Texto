#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void printmap (char map[11][50]);

int main () {
char oldchar='_';
char map[11][50]={"_________X________","__Y_______________","____________Z_____","__________________","__________________","__________________","__________________","__________________","__________________","__________________"};
int playerposx=8;
int playerposy=4;
int x=0;


map[playerposy][playerposx]='O';

while (x>-1) {

system ("cls");
printmap (map);

x = getch()-48;


switch (x) {
  case 71://cima
      map[playerposy][playerposx]=oldchar;
      oldchar=map[playerposy-1][playerposx];
      map[playerposy-1][playerposx]='O';
      playerposy--;
    break;
  case 67://baixo
      map[playerposy][playerposx]=oldchar;
      oldchar=map[playerposy+1][playerposx];
      map[playerposy+1][playerposx]='O';
      playerposy++;
    break;
  case 49://esquerda
      map[playerposy][playerposx]=oldchar;
      oldchar=map[playerposy][playerposx-1];
      map[playerposy][playerposx-1]='O';
      playerposx--;
    break;
  case 52://direita
      map[playerposy][playerposx]=oldchar;
      oldchar=map[playerposy][playerposx+1];
      map[playerposy][playerposx+1]='O';
      playerposx++;
    break;
}

}
    return 0;
}
void printmap (char map[11][50]){

for(int i=0;i<11;i++){
    printf("%s\n",map[i]);
}

}





/*
while (x<30) {

x = getch()-48;

switch (x) {
  case 1:
      map[playerpos] = oldchar;
      oldchar = map[playerpos-1];
      map[playerpos - 1]='O';
      playerpos--;
    break;
  case 2:
      map[playerpos + 1]='O';
      map[playerpos] = oldchar;
      playerpos++;
    break;
}

printf ("%s\n",map);
}
*/
