#include <stdio.h>

int main(void){
    FILE *ifile;
    int done, num, message, N;

    ifile = fopen("fileUntilEnd.txt","r"); // r stands for "read"
    done = 0;
    N=0;

    while (!done)
    {
        message = fscanf(ifile,"%d", &num);
        if (message == EOF)
        {
            done=1;
        }else{
            printf("Iread %d from the file. \n", num);
            N++;
        }
        
    }
    printf("There are %d numbers in the file. \n", N);
    return 0;
}