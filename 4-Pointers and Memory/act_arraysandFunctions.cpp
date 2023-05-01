#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int * ptr, int size) {
    int i;
    int max[]={0};
    
    for (i=0; i<size; i++) {
        if (ptr[i]>ptr[i+1])
        {
            if (ptr[i]!='\0')
        {
             max[0]=ptr[i];
        }else{
            max[0]=ptr[i+1];
        }
        
           
        }
    }
    for (i=0; i<size; i++) {
        ptr[i] = max[0]-ptr[i];
    } 
}