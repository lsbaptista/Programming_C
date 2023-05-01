#include <stdio.h>
#include <math.h>
int main(void) {
    double dCement;
    int iPrice=45;
    int iWeight=120;
    int total;
    scanf("%lf",&dCement);
    total = (int) (ceil(dCement/iWeight) * iPrice);
    printf("%d",total);
    return 0;
}