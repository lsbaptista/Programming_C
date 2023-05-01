#include <stdio.h>
int main(void){
    int players;
    int teamA;
    int teamB;
    int totalA = 0;
    int totalB = 0;
    int i;
    scanf("%d",&players);
    for(i=0;i<players;i++){
        scanf("%d",&teamA);
        totalA = totalA + teamA;
        scanf("%d",&teamB);
        totalB = totalB + teamB;
    }
    if(totalA>totalB){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight team 1:%d\n",totalA);
    printf("Total weight team 2:%d\n",totalB);
    return 0;
    
}