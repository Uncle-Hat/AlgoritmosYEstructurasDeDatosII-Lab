#ifndef _DATA_H_
#define _DATA_H_

#define NAME_MAXSIZE 30

typedef char name_t [NAME_MAXSIZE];

typedef struct _s_data {
    name_t name;
    unsigned int age;
    unsigned int height;
} data_t;


#endif

/* 
1_a.

.1 Completar el archivo sizes.c para que muestre el tamaño en bytes de cada miembro de la estructura data_t por separado y el tamaño total que ocupa la estructura en memoria. 
¿La suma de los miembros coincide con el total?
¿El tamaño del campo name depende del nombre que contiene? 

.2 De manera similar a lo hecho para mostrar los tamaños de cada campo de la estructura, agregar un mensaje que muestre la dirección de memoria de cada campo. Se recomienda usar los dos tipos de visualizaciones explicadas anteriormente (direcciones e índices). Analizar la salida y responder: 
¿Hay algo raro en las direcciones de memoria?

Ayuda: Ver recursos sobre padding de estructuras al principio del documento.


.3 Por último, modificar sizes.c para que la estructura data_t se guarde en la memoria dinámica. Usar malloc y free para reservar y liberar la memoria.
Para guardar el campo name, se puede usar la función strcpy de string.h.
*/