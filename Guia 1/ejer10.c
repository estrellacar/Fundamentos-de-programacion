/*Dada una fecha con año, mes y día, informar si es correcta o no. Solicitarle los
datos al usuario de forma independiente. Considerar años bisiestos. */

#include <stdio.h>
int main(){
    int anio,mes,dia;
    int dias_mes;
    printf("Ingrese un día: ");
    scanf("%i", &dia);
    printf("Ingrese un mes: ");
    scanf("%i",&mes);
    printf("Ingrese un año: ");
    scanf("%i", &anio);

    if (mes < 1 || mes > 12)
        printf("Formato de mes inválido\n");
    else{
        if(mes == 2){
            if ((anio % 400 == 0)||(anio % 4 == 0 && anio % 100 !=0)){
                dias_mes = 29;
            }else {
                dias_mes = 28;
            }
        }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            dias_mes = 30;
        }else {
            dias_mes = 31;
        }
        if (dia>= 1 && dia <= dias_mes){
            printf("La fecha es correcta \n");
        }else{
            printf("La fecha es incorrecta \n");
        }
     }
     return 0;

}