#include <stdio.h>
int main(void){
    double array[50];
    double readValue=0.0;
    int cars;
    double total=0;
    double avg;
    int i;
    scanf("%d", &cars);
    for(i = 0 ; i < cars; i++){
        scanf("%lf", &readValue);
        array[i] = readValue;
        total = total + readValue;
    }
    avg = total/cars;
    for(i = 0 ; i < cars; i++){
        array[i] = avg - array[i];
        printf("%.1lf\n",array[i]);
    }

    return 0;
}