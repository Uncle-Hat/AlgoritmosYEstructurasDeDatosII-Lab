#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



void array_dump(int a[], size_t length) {
    fprintf(stdout, "length: %lu\n", length);
    fprintf(stdout, "[ ");
    for (size_t i = 0u; i < length; ++i) {
        fprintf(stdout, "%d", a[i]);
        if (i < length - 1) {
            fprintf(stdout, ", ");
        }
    }
    fprintf(stdout, "]\n");
}


int * array_from_file(const char *filepath, size_t *length) {
    // La función devuelve un entero y toma como parametros un caracter de tipo constante char y una longitud de tipo size_t
    FILE *file = NULL; 
    file = fopen(filepath, "r");
    if (file == NULL) {
        fprintf(stderr, "File does not exist.\n");
        exit(EXIT_FAILURE);
    }
    unsigned int i = 0u;
    unsigned int size = 0u;
    int res = 0;
    /*
    crea un puntero tipo file y abre el archivo modo lectura
    crea la variable tipo entero no signado i tal que es el lugar del arreglo en que se encuentra
    y size tamaño no signado completo del arreglo
    Y la variable res la cual almacena la cantidad de elementos dentro del archivo
    */
    
    res = fscanf(file, " %u ", &size);
    if (res != 1) {
        fprintf(stderr, "Invalid array.\n");
        exit(EXIT_FAILURE);
    }

    *length = size;
    int *array = NULL;
    
    /*
    res es el escaneo de valores del archivo que son enteros no signados
    si res es distinto de uno, el arreglo es inválido 
    el puntero array apunta a NULL
    */

    array = malloc(sizeof(int));

    //
    // COMPLETAR: - Reservar memoria para array
    //            - Cambiar el valor de *length para que contenga el tamaño del
    //              arreglo.
    //
    
    if (size > 0 && array == NULL) {
        fprintf(stderr, "Not enough memory\n");
        exit(EXIT_FAILURE);
    }
    
    while (i < size) {
        res = fscanf(file," %d ", &(array[i]));
        if (res != 1) {
            fprintf(stderr, "Invalid array.\n");
            exit(EXIT_FAILURE);
        }
       ++i;
    }
    
    fclose(file);
    return array;
}