#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
void verificar (int);
void CaF ();
void CaK ();
void FaC ();
void FaK ();
void KaC ();
void KaF ();

int  main ( int argc, char ** argv) {
    int selec;
    do {
        selec = 0;
        system ("cmd /c cls");
        printf ("Elige la conversión que requieras\n");
        printf ("1-De C a F\n");
        printf ("2-De C a K\n");
        printf ("3-De F a C\n");
        printf ("4-De F a K\n");
        printf ("5-De K a C\n");
        printf ("6-De K a F\n");
        printf ("7-Salir\n");
        printf ("La conversión: ");
        scanf ( "%d", &selec);
        
        verificar (selec);
    }
    while (selec != 7);
    
    return (EXIT_SUCCESS);
}

void verificar (int select){
    switch (select){
        
        case 1 :{
            CaF();
            break;
        }
        case 2 :{
            CaK ();
            break;
        }
        case 3 :{
           FaC ();
            break;
        }
        case 4 :{
           FaK ();
            break;
        }
        case 5 :{
           KaC ();
            break;
        }
        case 6 :{
           KaF (); 
            break;
        }
        default:{
            printf ("Error");
            break;
        }
    }
}

void  CaF () {
    printf (" \n Ingrese los °C: ");
    float   C = 0 ;
    scanf ( "%f" , &C);
    float F = C * 1.8 + 32 ;
    printf ("\n En °F son: %f\n", F);
    system ("cmd / c pause");
}

void  CaK () {
    printf ("\n Ingrese los °C: ");
    float  C = 0 ;
    scanf ( "%f" , &C);
    float K = C + 273.15;
    printf ("\n En °K son: %f\n",K);
    system ("cmd / c pause");
}

void FaC (){ 
    printf ("\n Ingrese los °F: ");
    float  F = 0 ;
    scanf ( "%f" , &F);
    float C = (F - 32)* 5/9;
    printf ("\n En °C son: %f\n",C);
    system ("cmd / c pause");
    
}

void FaK (){
     printf ("\n Ingrese los °F: ");
    float  F = 0 ;
    scanf ( "%f" , &F);
    float K = (F - 32)*5/9 + 273.15;
    printf ("\n En °K son: %f\n",K);
    system ("cmd / c pause");
}

void KaC (){
    printf ("\n Ingrese los °K: ");
    float  K = 0 ;
    scanf ( "%f" , &K);
    float C = K -273.15; 
    printf ("\n En °C son: %f\n",C);
    system ("cmd / c pause");
}

void KaF (){
    printf ("\n Ingrese los °K: ");
    float  K = 0 ;
    scanf ( "%f" , &K);
    float F = (K - 273.15)*9/5 + 32;
    printf ("\n En °F son: %f\n",F);
    system ("cmd / c pause");
}
    return (EXIT_SUCCESS);
}

