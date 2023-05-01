#include <stdio.h>
int main(void){
    int age;
    int weight;
    scanf("%d",&age);
    scanf("%d",&weight);
    int verAge = ((age!=60) || (age>10)) && weight > 20;
    
    if(age==60){
        printf("0");
    }else if(age<10){
        printf("%d",5);
    }else if(verAge){
        printf("40");
    }else{
        printf("30");
    }
    return 0;
    
}