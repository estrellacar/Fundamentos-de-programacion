/*Escribir una función que dados 2 números, calcule el porcentaje que el
primero representa respecto del segundo.*/

#include <stdio.h> 

double calcular_porcentaje(int num1,int num2){
    double porcentaje;
    porcentaje = (num1 / num2) * 100;
    return porcentaje;

    }

int main (){
    
printf("El porcentaje es :%.2f%%\n", calcular_porcentaje(20,10 ));
}
