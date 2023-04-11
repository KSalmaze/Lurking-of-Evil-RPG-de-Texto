#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//48 linhas
//168 colunas

int main () {

FILE*arq;
arq = fopen ("teste.txt","w");

char arquivo[2][169];

for(int j=0;j<48;j++){
  for(int i=0;i<168;i++){
    fprintf (arq,"x");
  }
fprintf (arq,"\n");
}

for(int j=0;j<48;j++){
  for(int i=0;i<168;i++){
    fscanf (arq,"%c",&arquivo[j][i]);
  }
}

for(int i=0;i<168;i++){
    printf ("%c",arquivo[0][i]);
  }

fclose (arq);

return 0;
}

/*
for(int i=0;i<48;i++){
  for(int i=0;i<168;i++){
    fprintf (arq,"%s");
  }
fprintf (arq,"\n");
}
*/
