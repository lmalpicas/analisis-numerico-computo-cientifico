#include<stdio.h>
#include<string.h>
char *corta_string(char *apuntador){
  int longitud;
  longitud = strlen(apuntador);
  if(longitud>1) apuntador=apuntador+1;
  else apuntador = "Error: La cadena ingresada no cuenta con 1 o mas caracteres";
  return apuntador;
}

int main(void){
    char *s="Campos verdes";
    char *aux;
    aux=s;
    while(*aux != ' '){
      aux=aux+1;
      //printf("%s\n",aux);
    }
    printf("Probamos con la cadena: %s\n",aux);
    aux=corta_string(aux);
    printf("Resultado: %s\n",aux);
 
return 0;
}
