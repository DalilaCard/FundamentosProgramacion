#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float g, p, n,x; 
   
    printf ("Dinero con el que cuenta: \n");
    scanf ("%f", &g);
    printf ("Gastos durante la produccion: \n");
    scanf ("%f", &p);
    
    n= g-p;
    printf ("Ganancias netas: %.3f\n", n);
    
    x= (n*100)/p;
    printf ("Porcentaje de ganancia: %.3f \n", x);
   
    return (EXIT_SUCCESS);
}