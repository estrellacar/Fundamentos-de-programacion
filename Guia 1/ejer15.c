/*Dada una serie de números ingresados de a uno.
Indicar mayor, menor y promedio de la serie.
El ingreso de números finaliza cuando el usuario ingresa 0.*/

#include <stdio.h> 

int main(){
    
    int numero_ingresado;
    float cant_numeros = 0;
    int suma = 0;
    int numero_mayor;
    int numero_menor;
    printf("Ingrese una serie de números (INGRESE 0 PARA FINALIZAR):\n ");
    scanf("%i", &numero_ingresado);
    numero_mayor = numero_ingresado;
    numero_menor = numero_ingresado;
    while (numero_ingresado != 0){

            if (numero_ingresado>numero_mayor){
                numero_mayor = numero_ingresado;
            }
            if (numero_ingresado < numero_menor){
                numero_menor = numero_ingresado;
            }
        
        suma += numero_ingresado;
        cant_numeros ++;

        printf("Ingrese una serie de números (INGRESE 0 PARA FINALIZAR):\n ");
        scanf("%i", &numero_ingresado);
    }

    if (cant_numeros > 0){
        float promedio =(float)suma / (float)cant_numeros;
        printf("Mayor: %i\n", numero_mayor);
        printf("Menor: %i\n", numero_menor);
        printf("Promedio: %.2f\n",promedio);
    }else{
        printf("\n No se ingresaron números válidos");
    }
    return 0;
}