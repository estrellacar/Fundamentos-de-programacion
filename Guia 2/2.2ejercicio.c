/*Escribir una función que dado un número entero, devuelva un valor booleano
que indique si dicho número es primo o no. Antes de plantear una solución ten
presente las siguientes preguntas.
a) Con sólo encontrar un divisor del número a evaluar distinto a uno y a sí
mismo, ya puedo afirmar que el número no es primo. ¿Tiene sentido seguir
evaluando más divisores?
b) Teniendo en cuenta que todo número par a excepción del 2, no es primo,
¿Tiene sentido seguir en un ciclo, si al calcular el resto de la división del número
a evaluar por 2, el resultado es cero?
c) Puedo encontrar un divisor del número a evaluar que sea mayor al número a
evaluar dividido 2?*/

#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n){
    bool primo = true;
    int i = 2;
    while (primo && i <= n/2)
        if (n % i == 0)
            primo = false;
        else
            i++;

    return primo;

}
int main(){

    if (es_primo(7)){
        printf("Es primo\n");
    }
    else {
        printf("No es primo\n");
    }
    return 0; 
}