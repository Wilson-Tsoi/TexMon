#include "mylib.h"


//typedef int * (*link)(formula, ...); 
/* 
type: function pointer

usage:
link = &formula_as_a_function(a, &b) or
link = &formula_as_a_function(a, ptr) //ptr points to b

description:
link two variables <int> and the variable <int *> points to;
Changes to the <int> variable 
updates the variable pointed by <int *>
*/

//typedef int (*formula)(int *, ...);


int i = 0, max = 10;
int n = 3;
int *p;

void print_p(int *ptr) { 
    // print the address and value of any pointer
    printf("<int *p>\taddress: %d\tvalue: %d\n", ptr, *ptr); 
}

//#define MAX 10

int * arr(void) {
    // initialize an array length 10
    int *ptr;
    //p = &n; 
    ptr = malloc(max * sizeof(int));
    int *org = ptr; //set *org 
    //print_p(p);
    //++p;
    while (i < (max + 1)) {
        *ptr = 0;
        //print_p(ptr);
        ++i && ++ptr;
    }
    i = 0;
    /* p = &n;
    print_p(p); */
    ptr -= (max + 1);
    assert(("check ptr arithmetic", ptr == org));
    return ptr;
}

void next(void) {
    p++;        // move int *p by 1 and
    *p = 0;     // initialize its content
    printf("\n(next: executed) p should point to the next int\n ");
    print_p(p);
}

void prev(void) {
    // move int *p by 1
    p--;
    printf("\n(prev: executed) p should point to the previous int\n ");
    print_p(p);
}

void save(void) {
    //save the value of p to n
    n = *p;
    printf("\n(save executed) ->\n n: %d\t\taddress: %d\n", n, &n);
}

void put(void) {
    // put value of n to the value p is pointing at
    *p = n;
    printf("copied n to the address p\n");
    print_p(p);
}

void add1(void) {
    // add 1 to the value p is currently pointing
    (*p)++;
    printf("\n(add1 executed): increment value of p by 1\n ");
    print_p(p);
}

void sub1(void) {
    // subtract 1 to the value p is currently pointing
    (*p)--;
    printf("\n(sub1 executed): decrement value of p by 1\n ");
    print_p(p);
}

void exec(void) {
    int *org;
    p = arr(); org = p; 
    print_p(p); next(); next(); put(); p = org;
    printf("arr: { ");
    while (i < (max - 1)) {
        printf("%d, ", *p);
        ++i && ++p; 
    }
    ++p; printf("%d }\n", *p); 
    i = 0; p = org;//printf("%d\t%d\n", &i, *(p-1));
}

int main() {
    
    //print_p(p);
    exec();
    assert(("please set iterator i to 0", i == 0));
    return 0;
}