#include <stdio.h>

int main(void){
    FILE *ifile;
    int i=1, n=0;
    double num, N;

    ifile = fopen("gradeComparison.txt","r"); 
    fscanf(ifile,"%lf", &N);   

    while(fscanf(ifile,"%lf", &num)!=EOF)
    {   i++;
        if (num > N) //compare num to N instead of using another fscanf statement 
    {
        printf("No %d \n",i);
        n++; //only execute printf statement if comparison is true 
    }
    }   
    if (fscanf(ifile,"%lf", &num)==EOF && n==0) 
    {
        printf("Yes");
    }
          
    return 0;  
}