#include <stdio.h>

int main(void){
    int N=10;
    FILE *ofile;

    char filename[]="write_file.txt";
    ofile = fopen(filename,"w"); // r stands for "read"
    
    do{
        printf("Please enter a grade. -1 to quit.\n");
        scanf("%d", &N);
        if (N !=-1)
        {
           fprintf(ofile,"%d ", N); 
        }
        
    }while (N !=-1); 
        
    fclose(ofile);
}