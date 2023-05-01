#include <stdio.h>
int main(void) {
    int robots;
    int height;
    int weight;
    int enginePower;
    int resistance;
    int total=0;
    //printf("Insert number, please\n");
    // scanf("%d,%d,%d", &first, &second, &third);
    scanf("%d",&robots);
    for(int i=0;i<robots;i++){
        scanf("%d%d%d%d",&height,&weight,&enginePower,&resistance);
        total = total + (enginePower + resistance) * (weight - height);
    }
    printf("%d",total);
    return 0;
}