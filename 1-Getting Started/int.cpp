#include <stdio.h>
int main(void){
    int X = 25-23;
    int Y = 60*24*X;
    int Z = 60*Y;
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!",X,Y,Z);
    return 0;
}