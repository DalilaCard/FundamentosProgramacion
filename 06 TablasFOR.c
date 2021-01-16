#include <stdio.h>
#include <stdlib.h>

/*
 * 6. Tablas FOR  17/Nov/2020
 */
int main() { 
    
    int x;
    int n;
    
    for(n=1; n<=10; n++){ 
    
     printf ("///////////\n");
        
         for (x=1; x<=10;x++){
    
          printf ("%d X %d = %d\n",n,x,n*x);
        
         }
    
    }
    return (0);
    
}