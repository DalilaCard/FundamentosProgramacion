#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x,n,t;
    printf ("Número de elementos que quieres en la serie: ");
    scanf ("%d", &x);
    printf ("Que serie quieres: ");
    scanf ("%d", &n);
    int i;
    do{
         t=t+n;
        printf ("%d, ",t);
        i++;
    }while (i<x);
                       
    printf ("\nFIN");
    
    return (EXIT_SUCCESS);
}