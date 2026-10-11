/*Solicitar un número entero positivo al usuario y calcular su factorial. En el caso de
ingresar un número negativo mostrar un mensaje que diga “no se puede calcular el factorial
del número ingresado”.
Recordar que por definición factorial(0)=1 y factorial(1)=1*/

#include <stdio.h> 

int main(){

    int numero;
    int factorial = 1;
    printf("Ingresar un número entero positivo para calcular el factorial: ");
    scanf("%i",&numero);

    if (numero < 0){
        printf("No se puede calcular el factorial del número ingresado\n");
    }else{
        for (int i = 1; i <= numero; i++){
        factorial = factorial * i;
     }
    printf("El factorial es: %i\n",factorial);
    }
    return 0;
}