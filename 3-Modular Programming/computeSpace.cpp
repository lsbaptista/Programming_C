#include <stdio.h>
int main() {
    char caracter;
    char badCaracter='i';
    int number;
    int codes;
    int bytes=0;
    int n=0;
    scanf("%d",&codes);
    while(n<codes){
        scanf("%d %c",&number,&caracter);
        printf("%c\n",caracter);
        if (caracter != 'i' && caracter != 'c' && caracter != 'd')
        {
            badCaracter=caracter;
            printf("%c\n",badCaracter);
        }
        switch(caracter){
            case 'i': bytes=bytes+4*number;
            n++;
            break;
            case 'c': bytes=bytes+1*number;
            n++;
            break;
            default: bytes=bytes+8*number;
            n++;
            break;
        }
    }
    if (badCaracter!='i')
    {
        printf("Invalid tracking code type ");
    }else{
        printf("%d bytes\n", bytes);
    }
    return(0); 
}