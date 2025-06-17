#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include "counter.h"

struct _counter {
    unsigned int count;
};

counter counter_init(void) {
	counter a = malloc(sizeof(struct _counter));
	a->count = 0;
	return a;
}

void counter_inc(counter c) {
	c->count++;	
}

bool counter_is_init(counter c) {
	return c!=NULL;
}

void counter_dec(counter c) {

	c->count--;
}

counter counter_copy(counter c){
	counter aux = malloc(sizeof(struct _counter));
	aux->count = c->count;
	return aux;
}

void counter_destroy(counter c) {
	free(c);
}
