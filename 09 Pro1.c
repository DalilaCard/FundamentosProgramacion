#include <stdio.h>
#include <stdlib.h>

/*
 * Promedio 
 */
int main(int argc, char** argv) {

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
    float suma;
    
     for (i; i<A; i++) { 
         
       suma= suma + arreglo [i];
     }
    
    printf ("\n El promedio es: %f",suma/A);
    
    return (EXIT_SUCCESS);
}

