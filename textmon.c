#include "mylib.h"

#define MAXLINE 1000 /* max input line length */
char *lineptr[MAXLINE]; /* pointers to text lines */

int getline(char **lineptr, int *size, FILE *fp);
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