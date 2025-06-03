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
    my_list = malloc(sizeof(List));
    a_node = my_list;
    i = i-1;
    while(i>0){
        a_node->data = i*10;
        a_node = malloc(sizeof(Node));
        a_node = a_node->next;
        i = i-1;
    }
    // a_node->data = 0;
    // a_node->next = NULL;
    // a_node = NULL;
    return  a_node;
}

void show_list(List xs) {
    printf("[ ");
    while (xs != NULL) {
        printf("%i, ", xs->data);
        xs = xs->next;
    }
    printf("]\n");
}

int main(void) {
    List my_list;

    my_list = setup_example();

    show_list(my_list);

    return 0;
}
