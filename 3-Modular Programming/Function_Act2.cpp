#include <stdio.h>
int min(int x,int y){ 
    int min;
    if(x>=y){
        min=y;
    }else{
        min=x;
        }
    return min;
}


int main(void) {
    int times;
    int i=2;
    int number1;
    int number2;
    int minx;
    printf("How many numbers?: ");
    scanf("%d", &times);
    printf("Please enter a numbers: ");
    scanf("%d", &number1);
    printf("Please enter a numbers: ");
    scanf("%d", &number2);
    minx = min(number1,number2);
    while (i<times){
        printf("Please enter a numbers: ");
        scanf("%d", &number1);   
        minx = min(number1,minx);
        i++;
        }
    printf("%d",minx);
    return 0;
}