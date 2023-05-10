#include <stdio.h>

int main(){
    int radius = 5;
    const double PI = 3.14159265358979323846264338;
    
    double cir = 2 * radius * PI;
    printf("radius: %d, circumference = %1f", radius, cir);

    return 0;
}