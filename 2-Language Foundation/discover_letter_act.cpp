#include <stdio.h>
int main(void) {
    char word[50];
    int found = 0;
    int i = 0;
    int j = 0;
    int n = 0;

    
    scanf("%s", word);
    
    while (word[i]!= '\0') {
        i++;
    }
    if(i%2 != 0){
        j = (i/2) + 1;
    }else{
        j = i/2;
    }
    while (!found && n<i){
        if (word[n] == 't' || word[n]== 'T'){
            found=1;
        }else{
            n++;
        }
    }
    if(found && n<=j){
        printf("1");
    }else if(found && n>j){
        printf("2");
    }else {
        printf("-1");
    }
	return 0;
}