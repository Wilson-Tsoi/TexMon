#include "mylib.h"


char *lineptr[MAXLINE]; /* pointers to text lines */


int getdelim(char **lineptr, int *size, int delim, FILE *fp);

struct tnode 
{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
    /* data */
};


int main() {
    char buf[128];
    if (fgets(buf, sizeof buf, stdin)) {
        printf("read %zu chars: %s", strlen(buf), buf);
    }
    return 0;
}