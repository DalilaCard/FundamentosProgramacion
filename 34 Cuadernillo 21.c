#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    printf ("¡Calculo de la hipotenusa!");
    
    float a, b, h;
    
    printf ("Medida del cateto 1: ");
    scanf ("%f", &a);
    
    printf ("Medida del cateto 2: ");
    scanf ("%f", &b);
    
    h=  sqrt ((a*a)+(b*b));
            
    printf ("La hipotenusa es= %.3f", h);
    
    return (EXIT_SUCCESS);
}