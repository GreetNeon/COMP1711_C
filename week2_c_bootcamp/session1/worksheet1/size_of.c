#include <stdio.h>

int main(){
    printf("The Maximum size of basic data types:\n Float: %ld byte(s)\n Int: %ld byte(s)\n Double: %ld byte(s)\n Char: %ld byte(s)\n", 
    sizeof(float), sizeof(int), sizeof(double), sizeof(char));
    return 0;
}