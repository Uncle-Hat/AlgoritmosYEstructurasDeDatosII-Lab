#include <stdlib.h>  /* EXIT_SUCCESS... */
#include <stdio.h>   /* printf()...     */
#include "pair.h"    /* TAD Par         */

pair_t pair_new(int x, int y){
	pair_t aux;
	aux.values[0] = x;
	aux.values[1] = y;
	return aux;
};

/*
 * DESC: Creates a new pair with components (x, y)
 *
 */

int pair_first(pair_t p){
	int aux = p.values[0];
	return aux;
};

/*
 * DESC: Returns the first component of p
 *
 */

int pair_second(pair_t p){
	int aux = p.values[1];
	return aux;
};
/*
 * DESC: Returns the second component of p
 *
 */

pair_t pair_swapped(pair_t p){
	int auxfst = pair_first(p);
	int auxsnd = pair_second(p);
	p.values[0] = auxsnd;
	p.values[1] = auxfst;
	return p;
};
/*
 * DESC: Return a NEW pair with the components of p reversed
 *
 */

void pair_destroy(pair_t p){
};
/*
 * DESC: Free memory if its necessary
 *
 */


