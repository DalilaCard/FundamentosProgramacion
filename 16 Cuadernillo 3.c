#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int n;
    int hrs;
    int pro;
    int suma; 
    
      for(n=1; n<=5; n++){
          
        printf ("Horas por dia: ");
        scanf ("%d", &hrs);
        
       suma= suma + hrs;
        
      }
    pro = suma/5;
    printf("Promedio de horas por semana: %d ", pro);

    return (EXIT_SUCCESS);
}