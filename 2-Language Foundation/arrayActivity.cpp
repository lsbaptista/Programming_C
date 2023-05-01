#include <stdio.h>
int main(void) {
    int ingredients;
    double price[10];
    double weight[10];
    double total=0.0;
    int i;
    scanf("%d",&ingredients);
    for (i=0; i<ingredients; i++) {
        scanf("%lf", &price[i]);
        
    }
      for (i=0; i<ingredients; i++) {
        scanf("%lf", &weight[i]);
    }
    for (i=0; i<ingredients; i++) {
    total=total + price[i]*weight[i];
    }
    printf("%.6lf", total);
    return 0;
}