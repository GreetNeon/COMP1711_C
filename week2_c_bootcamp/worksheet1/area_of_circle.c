#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(){
    float area;
    float radius;
    printf("Please enter the radius of your circle: ");
    scanf("%f", &radius);
    area = powf(radius, 2) * M_PI;
    printf("The Area of the circle is %f\n", area);
    return 0;
}