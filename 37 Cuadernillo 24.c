#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c;
    
    printf ("Dinero que se tiene: \n");
    scanf ("%d", &a);
    
    printf ("Porcentaje de lo ganado que nececitas: \n");
    scanf ("%d", &b);
    
    c=(b*a)/100;
    printf ("%d es lo que debes invertir");
    
    return (EXIT_SUCCESS);
}