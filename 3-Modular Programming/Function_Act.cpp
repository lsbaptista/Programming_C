#include <stdio.h>
double conversion(double x, char y){ 
    double compute;
    if(y=='m'){
        compute = x*3.2808;
    }else if(y=='g'){
        compute = x*0.002205;
        }else{
            compute=32+1.8*x;
        }
    return compute;
}


int main(void) {
    int times;
    int i=0;
    double metric;
    char measure;
    double result;
    char compute[10];
    printf("How many numbers?: ");
    scanf("%d", &times);
    while (i<times){   
        printf("Please enter a metric and the measures: ");
        scanf("%lf %c", &metric, &measure);
        result = conversion(metric, measure);
        if(measure=='m'){
            char compute[]="ft";
            printf("Result of the sum = %.6lf %s\n", result, compute);
        }else if(measure=='g'){
            char compute[]= "lbs";
            printf("Result of the sum = %.6lf %s\n", result, compute);
            }else{
                char compute[]="f";
                printf("Result of the sum = %.6lf %s\n", result, compute);
            }    
        i++;
        }
    return 0;
}