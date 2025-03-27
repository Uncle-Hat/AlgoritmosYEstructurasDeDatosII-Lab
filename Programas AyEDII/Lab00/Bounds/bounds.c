#include <stdio.h>
#include <stdbool.h>
#define N 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

void request_array(int a[]){
    int i = 0;
    while (i<=N){
        printf("\nColocar valor para el elemento a[%d] : ",i);
        scanf("%d",&a[i]);
        i++;
    }
}
int request_int(int a){
    printf("\nColoca un entero de tu preferencia: ");
    scanf("%d",&a);
    return a;
}

void show_data(struct bound_data r){
    printf("¿Es cota inf? : %d\n",r.is_lowerbound);
    printf("¿Es cota sup? : %d\n",r.is_upperbound);
    printf("¿Está en el arreglo? : %d\n",r.exists);
    printf("Si es así, ¿Donde? : en a[%d]\n",r.where);
}


struct bound_data check_bound(int value, int arr[], unsigned int length){
    unsigned int i = 0;
    struct bound_data res = {0};
    int auxmin = 0;
    int auxmax = 0;
    while (i<=length){
        if(arr[i]!=value){
            if (arr[i]<value){
                auxmin = arr[i];
            } 
            else{
                auxmax = arr[i];
            }
        }
        else {
            res.exists = 1;
            res.where = i;
        }
        i++;
    }
    if(auxmin>value){
        res.is_lowerbound = 1;
    }
    else if (auxmax<value){
        res.is_upperbound = 1;
    }
    return res;
}

int main(void){
    int arr[N];
    arr[N] = 0;
    int c = 0;
    request_array(arr);
    c = request_int(c);
    struct bound_data result = check_bound(c,arr,N);
    show_data(result);
    return 1;
}