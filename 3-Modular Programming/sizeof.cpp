#include <stdio.h>
int main() {
    char caracter;
    int number;
    scanf("%c ",&caracter);
    scanf("%d",&number);
    switch(caracter){
        case 'i': number=sizeof(int)*number;
        break;
        case 's': number=sizeof(short int)*number;
        break;
        case 'c': number=sizeof(char)*number;
        break;
        default: number=sizeof(double)*number;
        break;
    }
    printf("%d\n",number);
    return(0); 
}