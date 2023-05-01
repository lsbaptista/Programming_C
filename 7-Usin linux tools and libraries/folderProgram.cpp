// program.c

#include <stdio.h>
//#include "weatherstats.h"

int main(void) {
	double temperatures[7] = {6.9, 12.3, 9.0, 5.3, 9.8, 1.8, 0.3};
	double average = averageTemp(temperatures, 7);
	printf("Average 7-day temp: %.2lf\n", average);
	return 0;
}
// weatherstats.h:

double averageTemp(double *temps, int numOfTemps);
// weatherstats.c:

double averageTemp(double *temps, int numOfTemps) {
	double result = 0.0;
	int i;

	for (i=0; i<numOfTemps; i++) {
		result = result + temps[i];
	}

	result = result / (double) numOfTemps;
	return result;
}

/*You will need these files in Weblinux, so if you have not yet created and compiled them, please do so now.

Reminder:

compile program.c to program.o using

gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o

compile weatherstats.c to weatherstats.o using

gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weatherstats.c -o weatherstats.o

link program.o and weatherstats.o into executable using

gcc -std=c11 -Wall -fmax-errors=10 -Wextra weatherstats.o program.o -o program

And we need to include the header file*/