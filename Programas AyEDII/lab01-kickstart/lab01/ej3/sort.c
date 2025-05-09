#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

/*
Copiar los archivos array_helpers.h, array_helpers.c y main.c del ejercicio 2. 
Luego copiar el “procedimiento” quick_sort_rec() (también del ejercicio 2) 
en el archivo sort.c y definir allí la función partition()
usando como guía la presentación que se dio del algoritmo de ordenación rápida en la clase del teórico. 
Ayudas:
Adaptar el algoritmo del teórico para usar goes_before().
Imprimir el arreglo antes y después de todas las llamadas a partition,
así como también los parámetros de entrada izq, der y el resultado ppiv.
Verificar que la función se comporta como debería.
Usar también las ayudas del ejercicio anterior.
*/

static unsigned int partition(int a[], unsigned int izq, unsigned int der) {
    int ppiv = izq;
    int i = izq + 1;
    int j = der;
    while(goes_before(i,j)){
        if(goes_before(a[i],a[ppiv])){
            i = i+1;
        }
        else if(goes_before(a[ppiv],a[j])){
            j = j-1;
        }
        else if (goes_before(a[ppiv],a[j])&&goes_before(a[j],a[ppiv])){
            swap(a,i,j);
        }
    }
    swap(a,ppiv,j);
    return ppiv;
}

static void quick_sort_rec(int a[], unsigned int izq, unsigned int der) {
    if (goes_before(izq,der)){
        int ppiv = partition(a,izq,der);
        quick_sort_rec(a,izq,ppiv-1);
        quick_sort_rec(a,ppiv+1,der);
    }
}

void quick_sort(int a[], unsigned int length) {
    array_dump(a,length);
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
    array_dump(a,length);
}

