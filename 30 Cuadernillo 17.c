#include <stdio.h>
#include <stdlib.h>

void rest (int *r); 
int main(int argc, char** argv) {
     
    int x;
    printf ("Costo actual: ");
    scanf ("%d", &x);
    rest (&x);
    printf ("Costo final: %d", x);
    

    return (EXIT_SUCCESS);
}

void rest (int *r){
*r= *r+125;
}