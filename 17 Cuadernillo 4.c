
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
int ventas[12];
int i; 
    
     for (i = 0 ; i<12; i ++) {
        printf ("\n  Ventas mes %d\n ", i+1 );
        scanf ("%d", &ventas[i]);
     }
    
    int min = ventas[0];
    int max = ventas[0]; 
    i=0;
    
    for (i; i<12;i++){
        if (ventas[i]<min){
            min = ventas[i];
        }
        if (ventas[i]> max) {
                max = ventas[i];
        }
            }
    
    printf ("\n La venta mas grande fue de: %d",min);
    printf ("\n La menor venta fue de: %d",max);
    
    return (EXIT_SUCCESS);
}