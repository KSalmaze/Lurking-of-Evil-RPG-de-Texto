#ifndef TYPES_H
#define TYPES_H

typedef struct {//Atributos
int teste;
int life;
int strengh;
int intelligence;
int sanity;
int charisma;
int resistance;
int luck;
}t_atributes;

typedef struct {//Position
int x;//Controla a posição no eixo x
int y;//Controla a posição no eixo y
int w;//Controla a sala atual do player
int z;//Controla o andar atual do player
}t_position;

typedef struct {//Player
t_atributes atributes;
t_position position;
char nome[25];
int genero;
int idade;
}t_player;

typedef struct {//Mapas
char complete;
char atual;
int colider;
int eventos;
}t_map;

typedef struct {//Inputs
int top;
int down;
int left;
int right;
int enter1;
int enter2;
int toparrow;
int downarrow;
int leftarrow;
int rightarrow;
}t_input;

typedef struct {//Game Stats
int save;
int idioma;
}t_gamestats;

typedef struct {//vector2
int x;
int y;
}vector2;

#endif

