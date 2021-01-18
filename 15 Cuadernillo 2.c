#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int C;
    int Expon;
    
    printf ( " Ingrese el cociente de su funcion SIMPLE:  ");
    scanf (" %d", &C);
    
    printf ( " Ingrese el exponente al que esta elevado x:   ");
        scanf ("%d", &Expon);
         
    
    printf ("La Derivada = %dx^%d", Expon*C, Expon-1);
    
   
    return (EXIT_SUCCESS);
}