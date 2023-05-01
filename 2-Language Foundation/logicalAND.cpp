#include <stdio.h>
int main(void) {
    int sunny = 1;
    int vacation = 1;
    int sunAndVacation = sunny && vacation;
    // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    if (sunAndVacation) {
        printf("Yeah!!\n");
    } else {
        printf("Too bad!\n");
    }
    return 0;
}