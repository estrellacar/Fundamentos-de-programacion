/*Un número entero positivo se dice perfecto si es igual a la suma de todos
sus divisores excepto él mismo. Ejemplo: los números 6, 28 y 496 son perfectos.
(6 = 1+2+3)
(28 = 1+2+4+7+14)
(496 = 1+2+4+8+16+31+62+124 +248)
Se pide:
a) Escribir una función booleana que permita discernir si un número (único
parámetro) es perfecto.
b) Dar un ejemplo de cómo se hace referencia a dicha función desde un
programa o desde otro subprograma.*/

#include <stdio.h>
#include <stdbool.h>

bool es_perfecto(int num){
    int suma = 0;
    int i;
    for (i = 1; num > i; i++) {
        if (num % i == 0)
        suma += i;
    }
    return (suma == num);
    
}

int main(){
    
    int numero = 400;
    
    if (es_perfecto(numero)){
        printf("Es un número perfecto\n");
    }else{
        printf("No es un número perfecto\n");
    }
    return 0;
}