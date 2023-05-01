#include <stdio.h>
int main(void) {
    double dMoney;
    double dPrice;
    int total;
    scanf("%lf%lf",&dMoney,&dPrice);
    total = (int) (dMoney/dPrice);
    printf("%d",total);
    return 0;
}