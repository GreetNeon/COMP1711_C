#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 20;
    int b = 10; 
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}

