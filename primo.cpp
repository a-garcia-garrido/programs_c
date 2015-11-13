#include <stdio.h>
#include <stdlib.h>

    int main(void)
    {
	int i;
	printf("Introduzca un número del 1 al 5:");
	scanf("%d",&i);

	if (i!=4) {
	    printf("El número es primo.\n");
	}
	else
	{
	    printf("El número no es primo\n");
	}     
    
       	return EXIT_SUCCESS;

}
