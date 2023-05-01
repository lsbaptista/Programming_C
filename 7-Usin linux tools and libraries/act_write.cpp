#include <stdio.h>

int main(void){
    FILE *ofile;
    int num, N;
    char filename[]="myGrades.txt";

    scanf("%d", &N);

    ofile = fopen(filename,"r"); // a for append will to override the values 

    if (ofile != NULL)
    {
        while (fscanf(ofile,"%d", &num)!=EOF)
    {
        num=num;
    }
    fclose(ofile);
    if (num==N)
    {
         ofile = fopen(filename,"r");
         while (fscanf(ofile,"%d", &num)!=EOF)
    {
        printf("%d ", num);
        }
        
    }else{
        ofile = fopen(filename,"a");
        fprintf(ofile," %d ", N); 
        fclose(ofile);
        ofile = fopen(filename,"r");
        while (fscanf(ofile,"%d", &num)!=EOF)
    {
        printf("%d ", num);
    }
    }
    }
     fclose(ofile);
    
}