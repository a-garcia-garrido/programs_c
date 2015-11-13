#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (){

    printf("\r");
    for (int vez=0; vez<80; vez++){

    
        for (int i=0; i<vez;i++)
    printf("=");
    sleep (1)
    }
    printf(">");
    return EXIT_SUCCESS;

}
