/*Escribir un programa que muestre las tablas de multiplicar desde la tabla del 1 hasta la
tabla del 9 para los primeros 100 números naturales.*/

#include <stdio.h>

int main (){

    for (int tabla = 1; tabla <= 9; tabla++){
        printf("===TABLA DEL %i ===\n", tabla);

        for (int i =1; i<= 100; i++){
            printf("%i X %i = %i\n",tabla, i, tabla*i);
        }

        printf("\n");
    }

    return 0;
}