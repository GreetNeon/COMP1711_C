#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, c);
    return 0;
}