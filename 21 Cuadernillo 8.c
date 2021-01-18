
#include <stdio.h>
#include <stdlib.h>

int main (){
 
    int R;
    printf ("¿Qué operación quiere realizar?\n "
            "1. Suma  2.Resta  3.Multiplicación  4.División\n");
            scanf ("%d", &R);
    if (R==1){
        int a,b;
        int suma;
        printf ("primer cantidad: ");
        scanf ("%d", &a);
        printf ("segunda cantidad: ");
        scanf ("%d", &b);
        
        suma= a + b;
        printf ("Respuesta= %d", suma);
    }
    if (R==2){
        int c,d;
        int resta;
        printf ("primer cantidad: ");
        scanf ("%d", &c);
        printf ("segunda cantidad: ");
        scanf ("%d", &d);
        
        resta= c - d;
        
        printf ("Respuesta= %d", resta);
    }
    if (R==3){
        int e,f;
        int multi;
        printf ("primer cantidad: ");
        scanf ("%d", &e);
        printf ("segunda cantidad: ");
        scanf ("%d", &f);
        
        multi= e * f;
        
        printf ("Respuesta= %d", multi);
   }
    if (R==4){
        int g,h;
        int div;
        printf ("Numerador: ");
        scanf ("%d", &g);
        printf ("Denominador: ");
        scanf ("%d", &h);
       div= g / h;
        
        printf ("Respuesta= %d", div);
    }
return (0);
}