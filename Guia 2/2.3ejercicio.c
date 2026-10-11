/*Escribir una función que reciba un valor entero y calcule el factorial del
mismo. Si no se puede calcular el factorial del valor recibido, la función deberá
devolver 0, de lo contrario deberá devolver el valor calculado. */

#include <stdio.h> 

int calcular_factorial (long long num){
    long long i; 
    long long factorial = 1;
    
    if (num < 0){
        printf("No se puede calcular el factorial de un número negativo.\n");
    }

    for (i = 1 ; i <= num; i++){
        factorial *= i;
    }

    printf("El factorial de %d: es %lld\n",num,factorial);
    return factorial; 
} 


int main() { 
    calcular_factorial(5);
    calcular_factorial(-3);
    calcular_factorial (0);
    calcular_factorial(20);
    return 0; 
}
