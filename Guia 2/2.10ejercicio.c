/*Escribir una función que dado un tiempo expresado en segundos, devuelva
por parámetros el equivalente en días, horas, minutos y segundos.
Utilizar esta función dentro de un programa que solicite el valor al usuario.
Se debe validar que el valor ingresado sea entero positivo, de lo contrario,
deberá mostrarse el mensaje: “Valor ingresado inválido”.
Ejemplo:
Valor ingresado representando una cantidad de segundos: 1234567
Resultado: Días: 14, Horas: 6, Minutos: 56, Segundos 7

60seg es 1min
3600 seg es 60 min que es 1 hora 
86400 seg son 24 horas que es 1 día 
*/
#include <stdio.h>
void convertir_tiempo(int total_segundos, int*dias, int*horas, int*minutos, int*segundos){
    if(segundos < 0)
    printf("Valor ingresado inválido\n");
    int resto;
    *dias = total_segundos /86400;
    resto = total_segundos % 86400;

    *horas = resto/3600;
    resto = resto % 3600;

    *minutos = resto /60;
    *segundos = resto % 60;
}

int main(){
    int total_segundos; 
    int dias,horas,minutos,segundos;
    printf("Valor ingresado representando una cantidad de segundos: ");
    scanf("%d", &total_segundos);
    convertir_tiempo(total_segundos, &dias, &horas, &minutos, &segundos);
    printf("Resultado: Dias: %d, Horas: %d, Minutos: %d, Segundos: %d\n",dias,horas,minutos,segundos);
    return 0;

}