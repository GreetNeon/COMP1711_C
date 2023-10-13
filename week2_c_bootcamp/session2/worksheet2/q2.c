#include <stdio.h>

int check_length(int *input){
    int count = 0;

    while (*(input+count) != -1){
        count += 1;
    }
    
    return count + 1;
}

void reverse(int *inp){
    int inp_len = check_length(inp);
    int reversed[inp_len], count, reverse_count, i, x;

    for (count = inp_len-2 ; count > -1 ; count--){
        x = (inp_len - 2) - count;
        reverse_count = x;
        reversed[reverse_count] = *(inp+count);
    }

    for(int i=0; i<inp_len - 1; i++){
        printf("%d ", *(reversed+i));
    }
    return;
}

void main(){
    int temporary_list[20];
    int a;

    for (a=0;a<19;a++){
        *(temporary_list+a) = a;
    }

    temporary_list[19] = -1;
    reverse(temporary_list);
    return;
}