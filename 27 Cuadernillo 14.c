#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int h;
    int col, bra;
    printf("Hora en Zac\n: ");
    scanf ("%d", &h);
    
    if (h<24){
        col= h+1;
                printf ("En Colombia son: %d hrs\n", col);
    }
        else{
        h=0;
        col= h+1;
        printf ("En Colombia son: %d hrs", col);
        }
    
     if (h<22){
        bra= h+3;
        printf ("En Rio de Janeiro son: %d hrs\n", bra);
        
     }  if (h==22){ 
         h=-2;
         bra= h+3;
        printf ("En Rio de Janeiro son: %d hrs\n", bra);
     }
        if (h==23){ 
         h=-1;
         bra= h+3;
        printf ("En Rio de Janeiro son: %d hrs\n", bra);
     }  
        if (h==24){
        h=0;
        col= h+1;
        printf ("En Rio de Janeiro son: %d hrs", bra);
        }
     
    return (EXIT_SUCCESS);
}