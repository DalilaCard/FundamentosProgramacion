
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   
    float M; 
    
    printf("Metros\n");
    scanf("%f", &M);
    
   float K = M*3.281; 
    
    printf ("Pies: %.4f", K); 
    return (EXIT_SUCCESS);
}
