/*Calcular y mostrar la suma de los n primeros números naturales. Siendo n un
número ingresado por el usuario. Usar fórmula [ n.(n+1) ] / 2
*/

#include <stdio.h>

int main(){

    int numero;
    int suma;

    printf("Ingrese un numero natural: ");
    scanf("%i",&numero);

    suma = (numero * (numero + 1) )/ 2;
    printf("La suma de los primeros %i números es: %i\n",numero,suma);
    return 0;
}