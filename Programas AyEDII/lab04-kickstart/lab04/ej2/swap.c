#include <stdio.h>

void swap(int a,int b){
    int aux = 0;
    aux = a;
    a = b;
    b = aux;
    printf("a = %d, b = %d\n",a,b);
}

int main()
{
    int x,y;
    x = 6;
    y = 4;
    printf("a = %d, b = %d\n",x,y);
    swap(x,y);
    return 0;
}
