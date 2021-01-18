#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

   int x=16; 
   int *n;
   n= &x;
  
   printf ("La dirección en memoria es: %p \n", &x);    
    
    printf ("Valor de la variable: %d \n", *n); 
    *n=5;
    printf ("Valor nuevo: %d",*n);
    return (EXIT_SUCCESS);
}