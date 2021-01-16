#include <stdio.h>
#include <stdlib.h>

/*
 * El mayor de 3 numeros 9/Nov
 */
int main() {

    float x= 4;
    float y= 9;
    float a= 10;
  
    
    if (x==y && x==a){
    printf ("Todos son iguales");
    }
    
    if (x>y && x>a){
        printf ("x es el mayor");
    }
    
    if (y>x && y>a){
        printf ("y es el mayor");
    } 
    if (a>x && a>y){
        printf ("a es el mayor");
    
    }
    
    return (0);
}
   