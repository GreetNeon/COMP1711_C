#include <stdio.h>

void main(){
    char temp[6] = "Hello";
    char temp2[6];
    int index;
    int rev_index;
    for (index = 4; index >-1; index--){
       printf("%c\n", *(temp+index));
       rev_index = 4 - index;
       temp2[rev_index] = *(temp+index);
    }
    printf("%s\n", temp2);
    printf("%s\n", temp);
    return;
}