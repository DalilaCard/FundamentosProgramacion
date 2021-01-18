#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo [10]= {2, 4, 5, 8, 9, 1, 3, 7, 0, 15};
    int * punt= arreglo;
    int sum;
    
    printf ("Número que quieres sumar a los elementos: ");
    scanf ("%d", &sum);
    
    for (int i=0; i<10; i++){
        
    *punt= arreglo [i];
    
    *punt = *punt + sum;
    
    printf("Total: %d\n", *punt);
    }
   return (EXIT_SUCCESS);
}