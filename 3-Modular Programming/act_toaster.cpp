#include <stdio.h>

int main() {
    char caracter;
    int number;
    int B;
    int KB;
    int MB;
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
    if (number>1000000) {
        KB = number%1000000;
        B =KB%1000;
        KB=KB/1000;        
        MB = number/1000000;
        printf("%d MB and %d KB and %d B\n", MB, KB,B);
    }else if(number>1000) {
        B =number%1000;
        KB = number/1000;
        printf("%d KB and %d B\n",KB,B);
    }else{
        B=number%1000;
        printf("%d B\n",B);
    }
    
    return(0); 
}

