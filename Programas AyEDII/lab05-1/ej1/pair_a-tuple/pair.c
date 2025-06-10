#include <stdio.h>
#include <stdlib.h>
#include "pair.h"


pair_t pair_new(int x, int y){
	pair_t newPair;
	newPair.fst = x;
	newPair.snd = y;
	return newPair;
};
/*
 * DESC: Creates a new pair with components (x, y)
 *
 */

int pair_first(pair_t p){
	int aux;
	aux = p.fst;
	return aux;
};
/*
 * DESC: Returns the first component of p
 *
 */

int pair_second(pair_t p){
	int aux;
	aux = p.snd;
	return aux;	
};
/*
 * DESC: Returns the second component of p
 *
 */

pair_t pair_swapped(pair_t p){	
	int auxfst = p.fst;
	int auxsnd = p.snd;
	p.fst = auxsnd;
	p.snd = auxfst;
	return p;
}; 
/*
 * DESC: Return a NEW pair with the components of p reversed
 *
 */

void pair_destroy(pair_t p){
	p.fst = 0;
	p.snd = 0;
};
/*
 * DESC: Free memory if its necessary
 *
 */

