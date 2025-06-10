#include <stdlib.h>  /* EXIT_SUCCESS... */
#include <stdio.h>   /* printf()...     */
#include "pair.h"    /* TAD Par         */

static
void show_pair(pair_t p) {
    printf("(%d, %d)\n", p.values[0], p.values[1]);
}
typedef struct s_pair_t pair_t;

int main(void) { 
    pair_t p, q;

    // Nuevo par p
    p = pair_new(3, 4);

    // Se muestra el par por pantalla
    printf("p = ");
    show_pair(p);

    // Nuevo para q con elementos de p intercambiados
    q = pair_swapped(p);

    // Se vuelve a mostrar p
    printf("p = ");
    show_pair(p);

    // Se muestra q
    printf("q = ");
    show_pair(q);

    // Se destruyen p y q
    pair_destroy(p);
    pair_destroy(q);
    return EXIT_SUCCESS;
}
// I - En este caso el código no compila ya que la el par no es una tupla de datos sinó un arreglo de dos elementos, aparte se rompe por un motivo que desconozco las posiciones en que se colocan los elementos
// II - 
// III - EL TAD NO logra encapsulamiento ya que, en el pair.h se está diciendo de forma directa los tipos concretos que se utilizan
