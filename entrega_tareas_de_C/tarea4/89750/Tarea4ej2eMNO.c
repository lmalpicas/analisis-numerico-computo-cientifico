#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINEA 1000 /*máximo tamaño de una línea*/
/*definición de variables externas*/
int max;
char linea[MAXLINEA];
char linea_max[MAXLINEA];
 
/*Prototipo de funciones:*/
 
int obtenlinea(void); 
void copia(void);
char *voltea(char *s);
 
/*imprime la línea con tamaño más grande*/
int main(void){
    int longitud;
    char *voltealinea;
    extern int max;
    extern char linea_max[MAXLINEA];
    max=0;
    while((longitud = obtenlinea()) > 0)
        if( longitud > 80){// Este if da solucion a la respuesta del inciso a)
            printf("%s\n", linea );
	    voltealinea = voltea(linea);
            printf("%s\n", voltealinea);

        }
    //if(max > 0)
       // printf("%s", linea_max);
return 0;
}
 
/*obtenlinea: lee una linea en el arreglo linea, regresa longitud*/
int obtenlinea(void){
    int c;
    int i;
    extern char linea[];
    for(i=0; i < MAXLINEA-1 && (c=getchar())!=EOF && c!= '\n'; i++)
	if(c != ' ') //solución al inciso b)
        linea[i] = c;
    if(c == '\n'){
        linea[i] = c;
        i++;
    }
    linea[i]='\0'; //este caracter es necesario para almacenar strings
    return i;
}
 
/*copia: copia del arreglo "linea" al arreglo "linea_max"*/
void copia(void){ 
    int i;
    extern char linea[], linea_max[];
    i=0;
    while( *(linea + i) != '\0' ){
        *(linea_max + i) = *(linea + i);
        i++;    
    }
}

char *voltea(char *s){  
    char *ptr;
    int n=strlen(s),i;
    ptr = (char *)malloc(n+1);
    if(ptr!=NULL)
        for(i=n-1;i>=0;i--)
         *(  ptr+n-1-i)=*(s+i);
        ptr[n]='\0';
    
    return ptr;
}
