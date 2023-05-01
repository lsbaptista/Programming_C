#include <stdio.h>

int sumOfDigits(int);
int main(void) {
    int n, sum;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative! Aborting..\n", n);
    }else{
        sum = sumOfDigits(n);
        printf("%d", sum);
    }
    return 0;
}
int sumOfDigits(int n){
    int result;
      if (n<10) {
        return n%10;
    } else {
    result = n%10 + sumOfDigits(n/10);
    }
    return result;
}