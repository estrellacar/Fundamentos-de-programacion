/*Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
mensaje adecuado.*/

#include <stdio.h>

int main(){

    int horas;
    int valor_hora;
    int sueldo_calculado;

    printf("Ingrese la cantidad de horas trabajadas en el mes: ");
    scanf("%i",&horas);
    printf("Ingrese el valor de la hora: ");
    scanf("%i",&valor_hora);

    sueldo_calculado = (horas * valor_hora);
    printf("El sueldo del mes es de $%i \n",sueldo_calculado);
    
    return sueldo_calculado;
}