#include <stdio.h>
int main(void){
    int nbThrows = 0;
    int nbDice = 0;
    int diceValue = 0;
    int throwSum = 0;
    int tehrow = 0;
    int dice = 0;
    scanf("%d %d", &nbThrows, &nbDice);
    for(tehrow = 0; tehrow<nbThrows; tehrow++){
        for(dice = 0; dice<nbDice; dice++){
            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", tehrow, throwSum);
        throwSum = 0;
    }
    return 0;
}