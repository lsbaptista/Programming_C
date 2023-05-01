#include <stdio.h>
int main(void) {
    char firstName[100];
    char lastName[100];
    int names;
    int i=0;
    scanf("%d",&names);
    for(i=0; i<names; i++){
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
    return 0;
}