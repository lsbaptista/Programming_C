#include<stdio.h>
int main(void) {

    char word[50];
    int n = 50;
    int i=0, j=0, k=0, total=0;
    char swap[50];

    scanf("%s", word);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);

    while(word[j]!='\0'){
        j++;
        i=0;
        while(word[i]!='\0'){
                    if (word[i] >= word[i+1] && word[i+1]!='\0') {
                        swap[i] = word[i];
                        word[i] = word[i+1];
                        word[i+1] = swap[i];
                    }
                    i++;
                }
            }

  printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);

  
      while(word[k]!='\0'){
        k++;
            if (word[k] == word[k+1] && word[k+1]!='\0') {
                total++;
                k++;
                while(word[k] == word[k+1]){
                    k++;
                }
            }
        }
    printf("%d\n", total);
    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
    return 0;
}
