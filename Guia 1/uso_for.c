/*Ejemplo que usa un for.
Imprime los números del 1 al 100.

El for necesita: 
1:una variable_contador con su valor_inicial 
2:condición que debe cumplir la variable_contador
3:incremento o decremento que se le aplicará en cada ciclo a la variable_contador 
*/

#include <stdio.h>

void main(){

    int contador;

    for (contador = 1; contador<=100; contador++)
        printf("%i\n",contador);
    
    return;
    }