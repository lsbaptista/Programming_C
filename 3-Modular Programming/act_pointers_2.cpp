#include <stdio.h>

void PTfunction(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	PTfunction(&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void PTfunction(int * a){
    if (* a>=21)
    {
        * a =* a -10;
    }else{
        * a=* a*2;
    }
    
}