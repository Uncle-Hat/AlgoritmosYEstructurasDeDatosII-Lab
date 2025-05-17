#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "data.h"

void print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}


int main(void) {

    data_t messi = {"Leo Messi", 36, 169};
    print_data(messi);
    //%lu - long unsinged int
    printf("name-size  : %lu bytes\n"
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n",sizeof(messi.name),sizeof(messi.age),sizeof(messi.age),sizeof(messi));

    printf("Memory Directions\n"
            "name-size  : %p \n"
           "age-size   : %p \n"
           "height-size: %p \n"
           "data_t-size: %p \n",
           (void *)&messi.name
           ,(void *)&messi.age
           ,(void *)&messi.height
           ,(void *)&messi);
    /*
     *
     * COMPLETAR
     *
     */

    return EXIT_SUCCESS;
}
//*p accede al valor de la variable p del tipo int*       
//&m accede a la dirección de memoria donde se almacenó el valor m
//¿La suma de los miembros coincide con el total?
//¿El tamaño del campo name depende del nombre que contiene?
