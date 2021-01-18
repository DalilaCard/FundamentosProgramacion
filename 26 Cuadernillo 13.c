#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    float x, y;
    float mag;
    
    printf ("Modulo de un vector");
    
    printf ("\nValor x: ");
    scanf ("%f", &x);
    
    printf ("\nValor de y: \n");
    scanf ("%f", &y );
    
    mag = sqrt ((x*x+y*y));
    printf ("Magnitud del vector: %f", mag); 
    
    return (EXIT_SUCCESS);
}