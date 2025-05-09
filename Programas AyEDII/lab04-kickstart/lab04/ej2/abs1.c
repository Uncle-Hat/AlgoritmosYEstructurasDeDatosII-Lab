#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    y = x;
    if (x<0){
        y = -x;
    }
    printf("%d\n",y);
}

int main(void) {
    int a = -10, res = 0;
    absolute(a,res);
    return EXIT_SUCCESS;
}