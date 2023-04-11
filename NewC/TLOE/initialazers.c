#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

void initialize_input (t_input* input){
input->top = 119;
input->down = 115;
input->left = 97;
input->right = 100;
input->enter1 = 13;
input->enter2 = 32;
input->toparrow = 3;
input->downarrow = 1;
input->leftarrow = 0;
input->rightarrow = 2;
}

void initializer_map(t_map* mapa);

