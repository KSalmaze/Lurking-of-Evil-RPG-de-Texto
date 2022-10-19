#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void printmap (char map[3][12][50],int z,int colider[3][10][20]);

void attplayerposition (int x,int y,int z,char old);

int main () {
char oldchar=' ';
//char map[11][50]={"__________________","__________________","__________________","__________________","__________________","__________________","__________________","__________________","__________________","__________________"};
char map[3][12][50]={{"XXXXXXXXXXXXXX","X    --+--   X","X            X","X            X","X            X","X    XXXXXXXXX","X             ","X             ","XXXXXXXXXXXXXX"},{" XXXXXXXXXX     "," X        X     "," X        X     "," XXXXX    XXXXX "," X            X "," X            X ","                ","                "," XXXXXXXXXXXXXX "},{" XXXXXXXXXXXXXXXXXX"," X                X"," X                X"," XXXXX            X","     X            X","     XXXXXXXXX    X","                  X","                  X"," XXXXXXXXXXXXXXXXXX"}};
int mapcolider[3][10][20]={{{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9},{-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{-9,8,8,8,8,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9},{-9,8,8,8,8,8,8,8,8,8,8,8,8,8,1},{-9,8,8,8,8,8,8,8,8,8,8,8,8,8,1},{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9}},{{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9},{-9,-9,8,8,8,8,8,8,8,8,-9,-9,-9,-9,-9,-9},{-9,-9,8,8,8,8,8,8,8,8,-9,-9,-9,-9,-9,-9},{-9,-9,-9,-9,-9,-9,8,8,8,8,-9,-9,-9,-9,-9,-9},{-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,-9,-9},{0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,2},{0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,2},{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9}},{{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9},{-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,-9,-9,-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,-9,-9,-9,-9,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,8,8,8,8,-9},{-9,-9,-9,-9,1,8,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,-9,-9,1,8,8,8,8,8,8,8,8,8,8,8,8,8,-9},{-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9,-9}}};
int eventos[3][10][20];
int playerposx=8;
int playerposy=4;
int playerposz=1;
int x=0;

map[playerposz][playerposy][playerposx]='O';

while (x>-1) {

system ("cls");
printf ("%d\n",mapcolider[playerposz][playerposy][playerposx]);
printf ("X %d Y %d Z %d\n",playerposx,playerposy,playerposz);
printmap (map, playerposz,mapcolider);

x = getch()-48;

switch (x) {
  case 71://cima
      if(mapcolider[playerposz][playerposy-1][playerposx]==-9)
        break;
      map[playerposz][playerposy][playerposx]=oldchar;
      oldchar=map[playerposz][playerposy-1][playerposx];
      map[playerposz][playerposy-1][playerposx]='O';
      playerposy--;
    break;
  case 67://baixo
      if(mapcolider[playerposz][playerposy+1][playerposx]==-9)
        break;
      map[playerposz][playerposy][playerposx]=oldchar;
      oldchar=map[playerposz][playerposy+1][playerposx];
      map[playerposz][playerposy+1][playerposx]='O';
      playerposy++;
    break;
  case 49://esquerda
      if(mapcolider[playerposz][playerposy][playerposx-1]==-9)
        break;
      if(mapcolider[playerposz][playerposy][playerposx-1]>=0 && mapcolider[playerposz][playerposy][playerposx-1]<7){
        playerposz = mapcolider[playerposz][playerposy][playerposx-1];
        playerposx=playerposx+12;
       }
       else {
      map[playerposz][playerposy][playerposx]=oldchar;
      oldchar=map[playerposz][playerposy][playerposx-1];
      map[playerposz][playerposy][playerposx-1]='O';
      playerposx--;
        }
    break;
  case 52://direita
      if(mapcolider[playerposz][playerposy][playerposx+1]==-9)
        break;
      if(mapcolider[playerposz][playerposy][playerposx+1]>=0 && mapcolider[playerposz][playerposy][playerposx+1]<7){
        playerposz = mapcolider[playerposz][playerposy][playerposx+1];
        playerposx=playerposx-4;
       }
      map[playerposz][playerposy][playerposx]=oldchar;
      oldchar=map[playerposz][playerposy][playerposx+1];
      map[playerposz][playerposy][playerposx+1]='O';
      playerposx++;
    break;
}

}
    return 0;
}

void printmap (char map[3][12][50],int z,int colider[3][10][20]){

for(int i=0;i<12;i++){
    printf("[%d] %s\n",i,map[z][i]);
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
