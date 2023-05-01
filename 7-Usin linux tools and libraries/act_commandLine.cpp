#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int number;
    double price;

    if (argc == 3)
    {
        number=atoi(argv[1]);
        price = atof(argv[2]);
        printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n",number, price, number*price);
    }else{
        printf("Invalid input");
    }
    return 0;
}
