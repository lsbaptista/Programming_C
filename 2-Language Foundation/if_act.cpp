#include <stdio.h>
int main(void){
    int pass;
    double gas;
    scanf("%d %lf",&pass,&gas);
    if(pass==0){
        printf("%.2lf",gas);
    }else{
        printf("%.2lf",(gas+1)/(pass+1));
    }
    return 0;
    
}