#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

char variableLeida;

printf("Ingrese el texto a analizar: \n");
variableLeida= getchar();

while (variableLeida != '\n'){
    if(isupper (variableLeida)){
       printf ("%c",tolower (variableLeida));
    }if(islower (variableLeida)){
       printf ("%c",toupper (variableLeida));
    }if(!isalnum(variableLeida)){
         printf ("%c",variableLeida);
    }
    variableLeida= getchar();
}
return 0;
}