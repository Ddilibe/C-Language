#include<stdio.h>

int main(){
    printf("Convertion rate from dollar to Naria\n  $1.00 = 148.00NGN\n");
    float value;
    printf("Enter the amount of Naria you want to convert to: ");
    scanf("%f", &value);
    float car = value/148;
    printf("The dollor equivalent of N%f is $%2f", value, car);
    
}