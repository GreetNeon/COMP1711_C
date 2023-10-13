#include <stdio.h>
#include <math.h>

void main(){
    int i;
    int temp;
    for (i=0; i < 11 ; i++){
        temp = pow(i,2);
        printf("%d\n", temp);
    }
    return;
}