#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x=1,y,i;
    int si;
    int no;
    
    printf ("¿Cuántas personas vas a entrevistar?");
    scanf ("%d", &y);
    while(x<=y){
    printf ("¿Se van a cacunar?\n"
            "1. Si      2.No \n"
            );
    scanf ("%d", &i);
            
    if (i==1){
        si= si+1;
    
    }
    if (i==2){
    no = no +1;
    }
    x++;
    }
    printf ("El numero de personas que si= %d\n", si);
    printf ("El numero de personas que no= %d", no);
    
    return (EXIT_SUCCESS);
}