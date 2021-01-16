#include <stdio.h>
#include <stdlib.h>

/*5. Tablas con While 12/Nov/2020 
*/

int main() {  
    
    int n = 1;
   
    while (n<=10){
        
        int x=1; 
        
        while (x<=10){
            
             printf ("%d X %d = %d\n",n,x,n*x);
             x=x+1; 
        }
        
        printf ("///////////////\n");
          n= n+1;   
              
    }
    
     return (0);
}
