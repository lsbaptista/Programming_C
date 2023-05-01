#include <stdio.h>

int main(void){
    int N, i , number;
    FILE *ifile;

    ifile = fopen("my_file.txt","r"); // r stands for "read"

    fscanf(ifile,"%d",&N);
    printf("There are %d numbers in the file \n", N);
    
    for (i = 0; i < N; i++)
    {
        fscanf(ifile, "%d", &number);
        printf("I read %d from the file.\n", number);
    }

    fclose(ifile);

    return 0;
}