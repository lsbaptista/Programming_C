#include <stdio.h>
#include <math.h>

int main(void) {
	int a;
    scanf("%d",&a);
	double squareRoot = sqrt(a);
    double exponential = exp(1);
	printf("%.8lf\n",squareRoot);
    printf("%.10lf\n",exponential);
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program");
	return 0;
}

//gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lmenu -lcurses program.c -o program