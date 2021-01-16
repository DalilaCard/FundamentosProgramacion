#include <stdio.h>
#include <stdlib.h>

/*Fibonacci   10/Nov/2020*/
int main() {   
    
    int n= 8;
    //número de elementos que queremos
    int x= 0;
    int p= 0; 
    int u= 1; 
    int a= 1; 
   
    
    printf ("0, ");
    
    while (a<n){ 
       
        p=u;
        u=x;
        x=p+u;
        //contador para el contlol de las interasiones
        a=a+1;
            
        printf ("%d, ",x);
    }
              
  return (0);  
}
