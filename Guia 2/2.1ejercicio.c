/*Escribir una función que reciba un valor n, entero, y devuelva la suma de los
valores entre 0 y n.
Ejemplos:​
suma_n(5) = 15
suma_n(120) = 7260
suma_n(120120) = 7214467260 */

#include <stdio.h>

int sumar_n(int num){
    int suma = 0;
    int i; 
    for (i = 0 ; i <= num; i++){
        suma = suma + i;
    }

    return suma;
}

int main (){
    printf("La suma es: %d\n", sumar_n(5));
    return 0; 
}
