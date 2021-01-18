#include <stdio.h>
#include <stdlib.h>

/*
 * orden correcto del arreglo
 */
int main(int argc, char** argv) {

int A;    
int i;
int x;

 printf ( "Número de elementos del arreglo: " );
    scanf ("%d", &A);

float arreglo[A];
for (i = 0 ; i<A; i ++) {
        printf ("\n  Valor del: %d\n ", i+1 );
        scanf ("%f", &arreglo[i]);
}
float aux=0; 
for (i=0;i<A-1;i++){
      
    for (x=0; x<A-1; x++)
       {
          if (arreglo[x] > arreglo[x+1])
          {
           aux= arreglo[x];
            arreglo[x]=arreglo[x+1];
            arreglo[x+1]=aux;
          }
       }
}
  printf ( "\n El orden correcto del arreglo es:\n ");
    for (int i=0; i<A; i++){
        
        printf ("%f, ", arreglo[i]);
    }
    return (EXIT_SUCCESS);
}

