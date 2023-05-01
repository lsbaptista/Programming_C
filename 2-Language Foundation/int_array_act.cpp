#include <stdio.h>
int main(void){
    int array[10];
    int readValue=0;
    int i = 0;
    for(i = 0 ; i < 10; i++){
        scanf("%d", &readValue);
        array[i] = readValue;
    }
    scanf("%d", &i);
    printf("%d",array[i]);
    return 0;
}