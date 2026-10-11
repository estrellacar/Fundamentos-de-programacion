/*Escribir una función que dados a y b devuelva el resto de la división entera,
sin utilizar el operador correspondiente de lenguaje. Para esta resolución deben
considerar la utilización de restas sucesivas.*/

#include<stdio.h> 

int calcular_resto(int num1,int num2 ){
    while(num1 >= num2){
        num1  = num1 -num2;
    }
    return num1;
}


int main(){
    printf("El resto es: %d\n", calcular_resto(10,2));
    return 0;
}