#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int b, i, x;    

 printf ( "Número de calificaciones que vas a ingresar: " );
    scanf ("%d", &b);
float arreglo[b];
for (i = 0 ; i<b; i ++) {
        printf ("\n  Calificación %d: \n ", i+1 );
        scanf ("%f", &arreglo[i]);
}
float y=0; 
for (i=0;i<b-1;i++){
      
    for (x=0; x<b-1; x++)
       {
        if (arreglo[x] > arreglo[x+1])
          {
           y= arreglo[x];
            arreglo[x]=arreglo[x+1];
            arreglo[x+1]=y;
         }
       }
}
  printf ( "\n El orden de las calificaciones:\n ");
    for (int i=0; i<b; i++){
        
        printf ("%f, ", arreglo[i]);}
 return (EXIT_SUCCESS);
}