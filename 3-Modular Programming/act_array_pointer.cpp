#include <stdio.h>
void reversearray(int *);
int main() {
    int number;
    int i;
    int arr[6];
    for(i=0;i<6;i++){
        scanf("%d",&number);
        arr[i]=number;
    }
    reversearray(arr);
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void reversearray(int * ptr){
    int aux;
    aux = *(ptr + 0);
    *(ptr + 0) = *(ptr + 5);
    *(ptr + 5) = aux;
    aux = *(ptr + 1);
    *(ptr + 1) = *(ptr + 4);
    *(ptr + 4) = aux;
    aux = *(ptr + 2);
    *(ptr + 2) = *(ptr + 3);
    *(ptr + 3) = aux;
    
}