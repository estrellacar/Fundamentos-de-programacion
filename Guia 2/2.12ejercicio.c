/*Escribir una función que reciba dos valores enteros, y devuelva el máximo
común divisor entre ambos números. Recordemos que se define el máximo
común divisor (MCD) de dos o más números enteros al mayor número entero
que los divide sin dejar resto alguno. Utilizar el algoritmo de Euclides.*/

#include <stdio.h>

int encontrar_mcd(int num1, int num2){
    while (num2 != 0){
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto; 
    }
    return num1;
}

int main(){
    int num1 = 48 ,num2 = 18; 
    printf("El MCD entre %d y %d es: %d \n", num1, num2, encontrar_mcd(num1,num2));
    return 0;
}