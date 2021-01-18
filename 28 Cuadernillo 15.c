#include <stdio.h>
#include <stdlib.h>

int area (int b, int h); 
int cir (int r);

int main(int argc, char** argv) {
    int l;
    printf ("¿Qué área quieres calcular?\n"
            "1. Circulo    2. Triángulo\n");
    scanf ("%d", &l);
    
    if (l==2){
       int x, y,a;
    
    printf ("Base en cm: ");
    scanf ("%d", &x);
    
    printf ("Altura en cm: ");
    scanf ("%d", &y);
     
    a= area (x, y);
    printf ("El area es: %d cm^2", a);
    }
    
    if (l==1) {int s, e;
     printf ("Radio en cm: ");
    scanf ("%d", &s);
     
    e= cir (s);
    printf ("El area es: %d cm^2 ", e);
    }
    
    return (EXIT_SUCCESS);
}

int area (int b, int h){
     return (b*h)/2 ;
}

int cir (int r){
     return (3.1416 * (r*r));          
}