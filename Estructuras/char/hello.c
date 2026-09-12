#include <stdio.h> 
#include <ctype.h>

void codigoASCII();
void vocalConsonante();
void minusculaMayuscula();
void contarLetra();
void verificarDigito();


int main (){

 int opcion;
    
 printf("Menu");
 printf("1. ");
 printf("2. ");
 printf("3. ");
 printf("4. ");
 printf("5. ");
scanf("%d", &opcion);

switch(opcion) {


case 1:
codigoASCII();
break;


case 2:
vocalConsonante();
break;


case 3:
 minusculaMayuscula();
break;


case 4:
 contarLetra();
break;


case 5:
 verificarDigito();
break;


default:
printf("Opcion no valida. ");
break;

    }

}

void codigoASCII (){

    char caracter;

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    printf("El codigo ASCII de '%c' es: %d\n", caracter, caracter);
}
void vocalConsonante (){

    char caracter;

    printf("Ingrese una letra: ");
    scanf(" %c", &caracter);

    if (caracter == 'a' || caracter == 'e' ||
        caracter == 'i' || caracter == 'o' ||
        caracter == 'u' ||
        caracter == 'A' || caracter == 'E' ||
        caracter == 'I' || caracter == 'O' ||
        caracter == 'U') {

        printf("Es una vocal.\n");

    } else {

        printf("Es una consonante.\n");
    }
}
void  minusculaMayuscula(){

    char letra;

    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &letra);

    printf("La letra en mayuscula es: %c\n", toupper(letra));
}
void contarLetra () {

    char palabra[100];
    char letra;
    int contador = 0;
    int i;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Ingrese la letra que desea buscar: ");
    scanf(" %c", &letra);

    for(i = 0; palabra[i] != '\0'; i++) {

        if(palabra[i] == letra) {
            contador++;
        }
    }
}
void verificarDigito (){

    char caracter;

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    if(caracter >= '0' && caracter <= '9') {

        printf("Es un digito numerico.\n");

    } else {

        printf("No es un digito numerico.\n");
    }
}

void contarLetra() {

    char palabra[100];
    char letra;
    int contador = 0;
    int i;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Ingrese la letra que desea buscar: ");
    scanf(" %c", &letra);

    for(i = 0; palabra[i] != '\0'; i++) {

        if(palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces.\n", letra, contador);
    }


    


