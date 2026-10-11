/*Dado un número n, informar los n primeros términos de la sucesión geométrica de
razón 3 (1, 3, 9, 27, etc.).*/

#include <stdio.h>

int main(){
    int n;
    int termino = 1; 

    printf("Ingrese un número para la sucesión: ");
    scanf("%i", &n);

    for (int i = 1;i <= n ; i++){
        printf("%i\n", termino);
        termino = termino * 3;
    }
    return 0;
}