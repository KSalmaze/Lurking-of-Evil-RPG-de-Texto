#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//48 linhas
//168 colunas

int main () {

FILE*arq;
arq = fopen ("teste.txt","w");

char arquivo[169];

/*
keybd_event ( VK_MENU, 0x36, 0, 0 );
keybd_event ( VK_RETURN, 0x1C, 0, 0 );
keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
*/

for(int i=0;i<48;i++){
  for(int i=0;i<168;i++){
    fprintf (arq,"x");
  }
fprintf (arq,"\n");
}

fscanf (arq,"%s",arquivo);

printf("%s",arquivo);

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
