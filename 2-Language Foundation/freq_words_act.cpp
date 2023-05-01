#include <stdio.h>
int main(void) {
    int i = 0;
    int l = 0;
    int total=0;
    int nbWords;
    char word[100];
    scanf("%d", &nbWords);
    for(i=0;i<nbWords;i++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
            if(total<=l){
               total=l;
            }
        }
    }
    printf("%d", total);

    return 0;   
}