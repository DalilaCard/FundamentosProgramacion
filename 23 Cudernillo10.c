#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int a,b,c;
    printf ("Medida del primer lado:");
    scanf ("%d", &a);
    
    printf ("Medida del segundo lado:");
    scanf ("%d", &b);
    
    printf ("Medida del tercer lado: ");
    scanf ("%d", &c);
    
    
    if (a != b && a != c){
        printf ("\nEs un triangulo escaleno\n");
    }
    if (a == b && a == c){
        printf ("\nEs un triangulo equilatero\n");
    }
    if (a != b && a== c){
      printf ("\nEs un triangulo isoseles\n");
    }
    if (a == b && a !=c){
         printf ("\nEs un triangulo isoseles\n");
    }
    return (EXIT_SUCCESS);
}