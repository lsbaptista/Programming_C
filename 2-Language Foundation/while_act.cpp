#include <stdio.h>
int main(void) {
    int min;
    int max;
    int temp;
    int done=-999;
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&temp);
    while(temp<=max && temp>=min){
            printf("Nothing to report\n");
            scanf("%d",&temp);
    }
    if (temp != done)
    {
        printf("Alert!\n");    
    }
    
    
    while (temp != done) {
        scanf("%d",&temp);
    }
    return 0;
}