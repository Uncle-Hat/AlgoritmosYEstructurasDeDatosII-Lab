#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "data.h"

void print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}


int main(void) { 
    data_t *messi = NULL;
    //Se crea un puntero a null de tipo data_t que apunta a null
    messi = malloc(sizeof(data_t)); 
    //la cantidad de espacio que utiliza el puntero de tipo data_t es del tamaño que admite esta estructura
    messi->age = 36;
    messi->height = 169;
    strcpy(messi->name,"Leo Messi");


    //%lu - long unsinged int

    printf("name-size  : %lu bytes\n"
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n",sizeof(messi->name),sizeof(messi->age),sizeof(messi->age),sizeof(messi));

    printf("Memory Directions\n"
            "name-size  : %p \n"
           "age-size   : %p \n"
           "height-size: %p \n"
           "data_t-size: %p \n",
           (void *)&messi->name
           ,(void *)&messi->age
           ,(void *)&messi->height
           ,(void *)&messi);
    free(messi);
    return EXIT_SUCCESS;
}
//*p accede al valor de la variable p del tipo int*       
//&m accede a la dirección de memoria donde se almacenó el valor m
//¿La suma de los miembros coincide con el total?
//No
//¿El tamaño del campo name depende del nombre que contiene?
//Tampoco