#include <stdio.h> 
#include <ctype.h>


int main (){

 

    char caracter,min;

    printf("Ingrese Caracter: ");
    scanf("%c", &caracter);

    printf("Su caracter ingresado es '%c' que en codigo es '%d' ", caracter, (int) caracter);


    printf("Ingrese Caracter: ");
    scanf("%c", &caracter);
    printf("");

    return(0);

}

