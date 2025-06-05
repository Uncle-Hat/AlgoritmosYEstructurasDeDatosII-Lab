#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef Node *List;

/**
 * @brief Construye y devuelve una lista de ejemplo de 3 elementos
 */

List setup_example() {
    int i = N;
    List my_list;
    List a_node;
    a_node = malloc(sizeof(Node)); //Primer elemento de la lista
    my_list = a_node;
    i = i-1;
    while(i>0){
        my_list->data = i*10;
        my_list->next = malloc(sizeof(Node));
        my_list = my_list->next;
        i = i-1;
    }
    my_list->data = 0;
    my_list->next = NULL;
    return  a_node;
}

void append(List l){
    List lst = malloc(sizeof(List));
    //¿Por qué funciona?
    lst->data = 88;
    lst->next = NULL;
    while(l->next!=NULL){
        l = l->next;
        //En este while debería estarse sobre escribiendo el valor de la list, no entiendo como funciona esto
    }
    l->next = lst;
}

void show_list(List xs) {
    printf("[ ");
    while (xs != NULL) {
        printf("%i, ", xs->data);
        xs = xs->next;
    }
    printf("]\n");
}

void tail(List l){
    *l = *l->next;
    }

// a_node := my_list
// my_list := my_list->next
// free(a_node)
// a_node := null

int main(void) {
    List my_list;

    my_list = setup_example();

    show_list(my_list);

    append(my_list);

    show_list(my_list);

    tail(my_list);
    
    show_list(my_list);
    return 0;
}
