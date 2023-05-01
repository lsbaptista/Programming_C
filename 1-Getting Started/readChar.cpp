
#include <stdio.h>
int main(void) {
    char var;//DECLARE A CHARACTER VARIABLE 
    printf("Please enter a letter: ");
    scanf("%c", &var);
    printf("++++%c++++\n", var);
    printf("+++%c%c%c+++\n", var,var,var);
    printf("++%c%c%c%c%c++\n", var,var,var,var,var);
    printf("+%c%c%c%c%c%c%c+\n", var,var,var,var,var,var,var);
    printf("%c%c%c%c%c%c%c%c%c\n", var,var,var,var,var,var,var,var,var);
    return 0;
}
