#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  float dinero[5];
  float suma;
  int i;
 
  for (i=0; i<5; i++){
  printf ("Ganancias del dia: ");
  scanf ("%f", &dinero[i]);
  
  suma= suma + dinero [i];
}
  printf ("El promedio de dinero que se "
          "gano esta semana es: %f", suma/5);
     
    return (EXIT_SUCCESS);
}