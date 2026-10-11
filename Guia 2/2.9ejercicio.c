/*Escribir una función que dada una fecha en formato aaaammdd (número
entero) la convierta en los parámetros numéricos aaaa, mm y dd.​
Ejemplo:​
fecha: 20140321 -> dia=21 mes=3 año=2014*/

#include <stdio.h>

void convertir_fecha(int fecha, int*anio, int*mes, int*dias){
    *anio = fecha / 10000;
    *mes = (fecha / 100) %100; 
    *dias = fecha % 100; 
}

int main(){
    int fecha = 20140321;
    int anio, mes, dias;

    convertir_fecha(fecha, &anio, &mes,&dias);
    printf("Fecha: %d ---> dia = %d mes = %d año =%d\n",fecha,dias,mes,anio);

    return 0;
}