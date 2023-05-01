#include <stdio.h>
int main(void) {
    int var;
    int i = 0;
    printf("Insert number, please\n");
    // scanf("%d,%d,%d", &first, &second, &third);
    scanf("%d",&var);
    for(i=0;i<11;i++){
        printf("%dx%d = %d\n",i,var,i*var);
    }
    return 0;
}
