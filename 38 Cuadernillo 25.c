#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   
    int nob[10];
    
    for ( int i = 0 ; i<10; i ++) {
        printf ("\n  Valor del: %d\n ", i+1 );
        scanf ("%d", &nob[i]);
    }
    
    for (int i=0; i<10; i++){
        int r;
        r= nob[i]*nob[i];
        printf ("%d, ", r);   
    }
    return (EXIT_SUCCESS);
}