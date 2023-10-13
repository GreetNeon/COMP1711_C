#include <stdio.h>

void sum(int *inp){
    int count = 0;
    int sum = 0;
    while (*(inp+count) != -1){
        sum += *(inp+count);
        count += 1;
    }
    printf("%d\n", sum);
    return;
}

void main(){
    int temp[312];
    int a;
    for (a=0;a<311;a++){
        *(temp+a) = a;
    }
    temp[311] = -1;
    sum(temp);
    return;
}