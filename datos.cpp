#include<stdio.h> 
#include<stdlib.h>
int main() 
{ 
    char a,b,c,d; 
    printf("Nombre: \t"); 
    scanf("%s",&a); 
    printf("\nApellidos:\t"); 
    scanf("%s",&b); 
    printf("\nTelefono: \t"); 
    scanf("%s",&c); 
    printf("\nCorreo:\t"); 
    scanf("%s",&d); 
    printf("\n\n\n\tNombre: %s \n\tApellidos: %s \n\tTelefono: %s \n\tCorreo: %s",a,b,c,d); 
     
    return EXIT_SUCCESS; 
} 
