#include <stdio.h>

int numerator;
int divisor;

int main(){
    float mass;
    printf("Enter the mass of the body, mass = ");
    scanf("%f", &mass);
    int g = 10;
    float force = mass * g;
    printf("The force of the body with mass %.2fg is %.2fN", mass,force);
    
}