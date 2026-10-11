/*Ingresar un número (del 1 al 7) que representa un día de la semana, escribir el
nombre del día correspondiente. En el caso de haber ingresado un número fuera de
rango indicarle del error al usuario.*/

#include <stdio.h>
int main(){
    int dia;
    printf("Ingrese un número del 1 al 7: ");
    scanf("%i",&dia);

    switch (dia){
    case 1:
        printf("Es lunes :D\n");
        break;
    
    case 2: 
        printf("Es martes :D\n");
        break;
    
    case 3: 
        printf("Es miércoles :D\n");
        break;
    case 4:
        printf("Es jueves :D\n");
        break;
    case 5:
        printf("Es viernes :D\n "); 
        break;

    case 6: 
        printf("Es sábado :D\n");
        break;
    case 7: 
        printf("Es domingo :D\n");
        break;
    
    default:
        printf("ERROR!! Opción fuera de rango \n");
    }
}