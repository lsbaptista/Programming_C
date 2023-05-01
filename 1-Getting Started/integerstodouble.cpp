#include <stdio.h>
int main(void) {
    int nGrades;
    int Grades;
    int Total=0;
    double dnGrades;
    scanf("%d",&nGrades);
    for(int i=0;i<nGrades;i++){
        scanf("%d",&Grades);
        Total = Total + Grades;
    }
    dnGrades = (double) Total;
    printf("%.2lf\n",dnGrades/nGrades);
    return 0;
}