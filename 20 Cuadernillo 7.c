#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr;
    int c;
    int rep = 1;
    
    printf ("Cantidad de dinero que va ahorrar por dia: ");
    scanf ("%d", &c);
            
    while(rep <= 365){
        
        arr= arr+c;
        printf ("%d\n",arr);
        rep++;
    }
   
return (EXIT_SUCCESS);}