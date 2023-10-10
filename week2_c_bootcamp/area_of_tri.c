#include <stdio.h>
#include <math.h>

int main(){
    float side1;
    float side2;
    float area;

    printf("This is an Area Calculator\n");
    printf("Please enter a side length: ");
    scanf("%f", &side1);
    printf("Please enter another side length: ");
    scanf("%f", &side2);

    area = roundf((side1 * side2) / 2);
    printf("The area of your triangle is: %f\n", area);
    return 0;
}
