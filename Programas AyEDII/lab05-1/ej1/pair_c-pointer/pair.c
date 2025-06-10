#include <stdio.h>
#include <stdlib.h>
#include "pair.h"


pair_t pair_new(int x, int y){
	pair_t aux = malloc(sizeof(pair_t));
	aux->fst = x;
	aux->snd = y;
	return aux;
};


/*
 * DESC: Creates a new pair with components (x, y)
 *
 */

int pair_first(pair_t p){
	int aux = p->fst;
	return aux;
};
/*
 * DESC: Returns the first component of p
 *
 */

int pair_second(pair_t p){
	int aux = p->snd;
	return aux;
};
/*
 * DESC: Returns the second component of p
 *
 */

pair_t pair_swapped(pair_t p){
	pair_t q = malloc(sizeof(pair_t));
	int auxx = p->fst; 
	int auxy = p->snd;
	q->fst = auxy;
	q->snd = auxx;
	return q;
};
/*
 * DESC: Return a NEW pair with the components of p reversed
 *
 */

void pair_destroy(pair_t p){
	free(p);
};
/*
 * DESC: Free memory if its necessary
 *
 */



