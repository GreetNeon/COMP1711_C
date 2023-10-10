#include <stdio.h>

int main(){
    float a;
    float b;
    float c;

    printf("Please enter a number: ");
    scanf("%f", &a);
    printf("Please enter another number: ");
    scanf("%f", &b);

    c = a + b;
    printf("The sum of adding %f and %f is %f\n", a, b, c);
    return 0;
}
