#include <stdio.h>
#include <stdlib.h>

int area (int b, int h); 
int peri (int l, int p, int z);

int main(int argc, char** argv) {
   int x, y,a;
    
    printf ("Base: ");
    scanf ("%d", &x);
    
    printf ("Altura : ");
    scanf ("%d", &y);
     
    a= area (x, y);
    printf ("El area es: %d", a);
    
    int m, k, f, p;
    printf ("\nCalculo de perimetro: \n");
    
    printf ("Lado 1: \n");
    scanf ("%d", &m);
    printf ("Lado 2: \n");
    scanf ("%d", &k);
    printf ("Lado 3: \n");
    scanf ("%d", &f);
    
    p= peri (m, k, f);
     printf ("El perimetro es: %d cm\n", p );
    
    return (EXIT_SUCCESS);
}

int area (int b, int h){
     return (b*h)/2 ;
}
int peri (int l, int p, int z){
    return l+p+z;
}