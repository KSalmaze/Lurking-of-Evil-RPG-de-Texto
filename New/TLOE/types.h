#ifndef TYPES_H
#define TYPES_H

typedef struct {
int teste;
int life;
int strengh;
int intelligence;
int sanity;
int charisma;
int resistance;
int luck;
}t_atributes;

typedef struct {
t_atributes atributes;

}t_player;

typedef struct {
char complete;
char atual;
int colider;
int eventos;
}t_map;

typedef struct {
int top;
int down;
int left;
int right;
int enter1;
int enter2;
}t_imput;


#endif

