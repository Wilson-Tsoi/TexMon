#include "mylib.h"
char *stack;
int num;
int number = 0, odd;
size_t size = 100 * sizeof(int);
memset(num, number, size);
stack = (char *)malloc(1000 * sizeof(char));

//stack = "getline\n";

void STD_GetLine() {
    char word[MAXCHAR];
    if (fgets(word, sizeof word, stdin))
        printf("STD_GetLine:\t%s", word);
}


int main(void) {
    //STD_GetLine();
    return 0;
}
