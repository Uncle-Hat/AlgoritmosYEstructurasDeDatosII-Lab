#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
    *y = x;
    if (x<0){
        *y = -x;
    }
}

int main(void) {
    int a=0, res=0;  // No modificar esta declaración
    // --- No se deben declarar variables nuevas ---
    a = -10;
    absolute(a,&res); //Tuve el error acá, al buscar la ubicación de memoria de res convertimos la variable en un puntero
    printf("%d\n",res);
    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

