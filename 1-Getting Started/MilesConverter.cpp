#include <stdio.h>
int main(void) {
    double distance;
    double miles;
    scanf("%lf",&distance);
    miles = distance*0.621371;
    printf("%.6lf",miles);
    return 0;
}