
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int R;
    printf ("Conesta las siguientes preguntas de cultura general,"
            " si tu respuesta es correcta se mostrara V de lo contrario "
            "aparecera un F.\n\n ");
  
    printf ("¿Cual es el diametro de la tierra?\n"
            "1. 12,700km     2. 13,849km     3. 12,742km\n");
        scanf("%d", &R);
            
        if (R == 3){
         
         printf ("V\n");
        } 
        else {
         printf ("F, la respuesta correcta es 12,742km\n");
        }      
        
    printf ("¿Cómo se llama la Reina del Reino Unido?\n"
            "1. Isabel I     2. Isabel II    3. Diana\n");   
         scanf("%d", &R);
         
        if (R == 2){
         
         printf ("V\n");
        } 
        else {
         printf ("F, la respuesta correcta es  2. Isabel II \n");
        }          
         printf ("¿En qué año acabó la II Gerra Mundual?\n"
            "1. 1940    2. 1939    3. 1945\n");   
         scanf("%d", &R);
         
        if (R == 3){
         
         printf ("V\n");
        } 
        else {
         printf ("F, la respuesta correcta es  3. 1945 \n");
        }
         
         printf ("¿Cuál es el mejor equipo de la Liga MX?\n"
            "1. América    2. Cruz Azul    3. Chivas\n ");   
         scanf("%d", &R);
         
        if (R == 1){
         
         printf ("V\n\n");
        } 
        else {
         printf ("F, la respuesta correcta obviamente es 1. América\n\n");
        }
         
         printf ("¿En qué país se encuentra el famoso monumento Taj Mahal?\n"
            "1. México    2. India    3. China\n ");   
         scanf("%d", &R);
         
        if (R == 2){
         
         printf ("V\n\n");
        } 
        else {
         printf ("F, la respuesta correcta es  2. India\n\n");
        }
       
         printf ("FIN...GRACIAS POR RESPONDER");
         
    return (EXIT_SUCCESS);
}