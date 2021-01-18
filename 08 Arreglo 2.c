#include <stdio.h>
#include <stdlib.h>

/*Arreglo 2   27/Nov*/
int  main ( int argc, char ** argv) {

    int a;
    
   
    printf ( "Elementos del arreglo:   " );
    scanf ("%d", &a);

    int arreglo [a];

    for ( int i = 0 ; i<a; i ++) {
        printf ("\n  Valor del: %d\n ", i+1 );
        scanf ("%d", &arreglo[i]);
    }

    
    printf ( "\n Los valores del arreglo son:\n ");
    
    printf ("[");
    for (int i=0; i<a; i++){
        
        printf ("%d, ", arreglo[i]);
       
    }
    printf ("]");
    return (EXIT_SUCCESS);
}

