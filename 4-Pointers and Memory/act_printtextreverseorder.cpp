#include <stdio.h>
int main(void){
    //! showMemory(cursors=[words[0], words[1], words[2]], start=65520)
    char words[68][41];
    int i;
    printf("Please enter three words: ");
    for (i=0; i<68; i++) {
        scanf("%s", words[i]);
    }
    printf("You entered: \n");
    for (i=67; i>=0; i--) {
        printf("%s ", words[i]);
    }
    return 0;
}