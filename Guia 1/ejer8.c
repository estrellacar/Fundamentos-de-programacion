/*Ingresar un número (del 1 al 12) que representa un mes, indicar la cantidad de
días de dicho mes.
-los meses 4,7,9 y 11 tienen 30 días
-Febrero  tiene 28 días 
- los meses 1,3,5,6,8,10 tienen 31 días */

#include <stdio.h>
int main(){
    int mes;
    printf("Ingrese un número del 1 al 12: ");
    scanf("%i", &mes);

    if (mes < 1 || mes > 12)
    {
        printf("Rango inválido :c\n");
    }else if (mes == 4 || mes == 7 || mes == 9 || mes == 11){
        printf("El mes tiene 30 días\n");
    }else if (mes == 2){
        printf("El mes tiene 28 días :D\n");
    }else 
    {
        printf("El mes tiene 31 días :D \n");
    }
}