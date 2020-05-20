#include <stdio.h>                             

int main (){
    int ascii;       
    char letra;  
         printf("Ingresa tu caracter: ");     
         scanf("%c",&letra);  
         printf("\n");
         printf("El caracter es %c",letra);
         ascii = letra;
         printf(" que tiene el codigo ASCII: %d\n\n",ascii);
}
