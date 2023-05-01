#include <stdio.h>

int main(void){
    int N, i , number,sum=0;
    FILE *ifile;

    ifile = fopen("studentGrades.txt","r"); // r stands for "read"

    fscanf(ifile,"%d",&N);
    
    for (i = 0; i < N; i++)
    {
        fscanf(ifile, "%d", &number);
        sum = sum + number;
    }
    printf("%.2lf\n", (double) sum/N);
    fclose(ifile);

    return 0;
}