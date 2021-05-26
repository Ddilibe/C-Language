#include<stdio.h>
#include<math.h>

int main() {
  int a;
  printf("Enter an integer value for a: ");
  scanf("%d", &a);
  printf("%d", a);
  float b = sqrt(a);
  printf("       %.2f", b);
  float c = sqrt((a*a)/(b+1));
  printf("       %.4f\n",c);
  
}