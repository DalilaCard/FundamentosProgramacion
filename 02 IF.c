

#include <stdio.h>
#include <stdlib.h>

/*
 * 3. El mayor de 4 numeros  9/Nov/2020
 */
int main() {

    float x= 4;
    float y= 9;
    float a= 6;
    float b= 10;
    
    if (x==y && x==a && x==b){
    printf ("Todos son iguales");
    }
    
    if (x>y && x>a && x>b){
        printf ("x es el mayor");
    }
    
    if (y>x && y>a && y>b){
        printf ("y es el mayor");
    } 
    if (a>x && a>y && a>b){
        printf ("a es el mayor");
    
    }
    if (b>x && b>y && b>a){
        printf ("b es el mayor");
    }
    return (0);
}