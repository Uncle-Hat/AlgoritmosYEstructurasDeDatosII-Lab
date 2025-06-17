#ifndef LIST_H
#define LIST_H


typedef int list_elem;
typedef struct _list * list;

//Const

list empty();
//-- It creates and empty list

list addl(list_elem e,list l);
//It adds an element by the left

//-- Destroy

list destroy(list l);
//Frees the memory

//-- Operations

bool is_empty(list l);
//Returns true if l is empty

list_elem head(list l);
//Returns the first element of the list
//PRE: !is_empty(l)

list tail(list l);
//Deletes the first element of the list
//PRE: !is_empty(l)

list addr(list l,list_elem e)
//adds an element to the end of the list

int length(list l);
//counts how many elements are on the list

list concat(list l,list l0);
//put the elements of l0 at the end of l

list_elem index(list l, int n);
//Devuelve el n-esimo elemento de la lista

list take(list l, int n);
//Deja en l solo los primeros n elementos

list drop(list l, int n);
//Elimina los primeros n elementos de l

list copy_list(list l0);
//copia los elementos de l0 a una nueva lista
#endif
