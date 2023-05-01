#include <stdio.h>

int main(void){
    FILE *ofile;
    int num, selection=1;
    char filename[]="write_file.txt";

    ofile = fopen(filename,"r"); // a for append will to override the values 
    if (ofile != NULL)
    {
       printf("You already have a file named %s.\n", filename);
       fclose(ofile);
       printf("Do you wish to (1) append or (2) overwrite? Enter 1 or 2:\n");
       scanf("%d", &selection);
    }
    if (selection == 1)
    {
        ofile=fopen(filename, "a");
    }else{
        ofile=fopen(filename, "w2");
    }
    
    
    do{
        printf("Please enter a grade. -1 to quit.\n");
        scanf("%d", &num);
        if (num !=-1)
        {
           fprintf(ofile,"%d ", num); 
        }
        
    }while (num !=-1); 
        
    fclose(ofile);
}