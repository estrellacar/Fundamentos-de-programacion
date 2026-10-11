/*Escribir una función que dados a y b devuelva el cociente de la división
entera, sin utilizar el operador correspondiente del lenguaje. Para esta
resolución deben considerar la utilización de restas sucesivas.*/

#include <stdio.h>
int calcular_cociente(int num1,int num2){
int cociente = 0;
    while (num1 >=  num2){
    num1 = num1 - num2;
    cociente++;
    }

return cociente;

}

int main(){

    printf("El cociente de la división es: %d\n",calcular_cociente(5,5));
}