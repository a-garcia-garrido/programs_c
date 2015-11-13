#include <stdio.h>
#include <stdlib.h>
int main (){
    FILE*pf;

    /* abre el archivo o lo crea */
    pf = fopen ("letra_cancion.txt" , "w");

    /* escribe dentro del archivo seleccionado el siguiente texto  */
    fprintf (pf, "I must've dreamed a thousand dreams\n"
	    "been haunted by a million screams\n"
	    "But I can hear the marching feet\n"
	    "they're moving into the street\n"
	    "Now did you read the news today\n"
	    "they say the danger's gone away\n"
	    "But I can see the fire's still alight\n"
	    "there burning into the night,\n");

		fclose(pf);

    return EXIT_SUCCESS;

}
