#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *duplica_string(char *s){  
    char *p;
    
    p = malloc(strlen(s)+1); /* sumamos uno para almacenar el caracter '\0'*/
        if(p!=NULL)
        strcpy(p,s);
    
    return p;
}

char * voltea_string(char *s){
    char *sinv = malloc( sizeof(s) );    
    int l = strlen(s), k;
    
    for(k = 0; k < l ; k++){
        //printf("k %d \n", k);
        *(sinv + l - k - 1) = *(s + k);
      }
    *(sinv + k) ='\0' ;
    
    return sinv;
}

int main(void){
    char s[50] = "Campos verdes";
    char *s_invertido;
    
    s_invertido = voltea_string(s);
    printf("%s\n", s_invertido);

    free(s_invertido);    
    return 0;
}
