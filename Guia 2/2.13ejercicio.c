/*Escribir una función que reciba un mes y un año como números enteros; y
devuelva la cantidad de días del mes, considerando los años bisiestos. Tenga en
cuenta que un año bisiesto es aquel divisible por 4, salvo que sea divisible por
100, en cuyo caso también debe ser divisible por 400.*/

#include <stdio.h>

int cantidad_dias(int mes, int anio){
    int dias;
    //Meses con 31 días
    if(mes ==1 || mes ==  3 || mes == 5 || mes == 7  || mes == 8 || mes == 10 || mes == 12){
        dias = 31;
    }
    //Meses con 30 días
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    }
    //Febrero
    else if (mes == 2){
        if (anio % 400 == 0 || anio % 4 == 0 && anio % 100 != 0 ){
        dias = 29;
        }else{
        dias = 28;
    
    }
    return dias;
} 
}

int main(){
    printf("La cantidad de días son: %d\n ",cantidad_dias(2,2024));
    return 0;
}