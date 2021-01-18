#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x, b,r;
    int go; 
    do {
        printf ("Valor a sumar\n");
       scanf ("%d", &b);
       x=x+b;
       printf ("Suieres seguir (1): \n");
       scanf ("%d", &go);
    } while (go == 1);
    
    printf ("Resultado= %d", x);
    
    return (EXIT_SUCCESS);
}
