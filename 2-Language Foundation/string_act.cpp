#include <stdio.h>
int main(void) {
    int rep;
    int i=0;
    char word[101]; //arrray of characters (string)
    scanf("%d", &rep);
    scanf("%s", word);
    while(i<rep){
        printf("%s\n",word);
        i++;
    }
    return 0;
}