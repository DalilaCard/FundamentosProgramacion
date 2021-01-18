#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
   int a[100];
   int n=100;
   int i;
  
   
   a[0]=2;
   a[1]=3;
 
   
   printf ("2, 3,");
   
       for (i=2;i<n;i++){
           
       a[i]=a[i-1]+a[i-2];
       
       
      printf ("%d, ",a[i]);
     
     }
   
    return (EXIT_SUCCESS);
}

