#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {

    int d;
    int pro;
    printf ("cuantos dias hizo esa actividad: ");
    scanf ("%d",&d); 
    
    pro = (d*100)/365;
    
            printf("el porcentaje es: %d", pro);
    
    return (EXIT_SUCCESS);
}