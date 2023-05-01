#include <stdio.h>
//function declaration
double square(double);

int main(void) {
    double a = 2.5;
    double aSquare = square(a);
    printf("%.2lf squared = %.2lf\n",a , aSquare);
    return 0;
}

//function definition
double square(double x){
    return x*x;
}