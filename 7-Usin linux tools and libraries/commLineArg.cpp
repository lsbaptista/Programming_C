#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, compare, wholenumber;
    double decimalNumber;

    printf("I have %d arguments from the command line : \n", argc);
    for (i=0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    if (argc == 4)
    {
        compare = strcmp(argv[1],"-e");
        if(compare ==0){
            printf("argv[1] equals -e \n");
        }else{
            printf("argv[1] does not equal -e \n");
        }
        wholenumber=atoi(argv[2]);
        printf("%s as an integer is %d.\n", argv[2],wholenumber);
        decimalNumber=atof(argv[3]);
        printf("%s as a double is %lf.\n",argv[3], decimalNumber);
    }
    return 0;
}
