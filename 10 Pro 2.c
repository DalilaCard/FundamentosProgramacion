#include <stdio.h>
#include <stdlib.h>

/*
 * Maximo y minimo 
 */
int main( ) {

    int A;
    int i;
   
    printf ( "Elementos del arreglo:   " );
    scanf ("%d", &A);

    float arreglo[A];
   
    for (i = 0 ; i<A; i ++) {
        printf ("\n  Valor del: %d\n ", i+1 );
        scanf ("%f", &arreglo[i]);
    }
     i=0;
    float min = arreglo[0];
    float max = arreglo[0]; 
            
    for (i; i<A;i++){
        if (arreglo[i]<min){
            min = arreglo[i];
        }
        if (arreglo[i]> max) {
                max = arreglo[i];
        }
            }
     printf ("\n El mínimo es: %f",min);
    printf ("\n El máximo es: %f",max);

    return (EXIT_SUCCESS);
}

