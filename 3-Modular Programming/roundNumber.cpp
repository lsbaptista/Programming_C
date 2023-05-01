#include <stdio.h>
int main() {
    float num = 0.25;
    double num1 = 0.25;
    float num2 = 0.3; /*power of 2 is the only possible representation. 0.25 is the same as 1/4 the same as (1/2²)*/ 
    double num3 = 0.3;
    
    printf("the number is %.40f\n", num);
    printf("the number is %.40lf\n", num1);
    printf("the number is %.40f\n", num2);
    printf("the number is %.40lf\n", num3);
    
    return(0);
}