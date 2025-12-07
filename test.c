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


int n = 3;
int *ptr;

void print_p(int *ptr) { 
    // print the address and value of any pointer
    printf("<int *p>\taddress: %d\tvalue: %d\n", ptr, *ptr); 
}

#define MAX 10

int * arr(void) {
    // initialize an array length 10
    int i = 1, max = MAX, *ptr;
    //p = &n; 
    ptr = malloc(max * sizeof(int));
    int *org = ptr;
    //print_p(p);
    //++p;
    while (i < max) {
        *ptr = 0;
        print_p(ptr);
        ++i && ++ptr;
    }
    /* p = &n;
    print_p(p); */
    ptr -= (max - 1);
    assert(ptr == org);
    return ptr;

}

void next(void) {
    ptr++;        // move int *p by 1 and
    *ptr = 0;     // initialize its content
    printf("\n(next: executed) p should point to the next int\n ");
    print_p(ptr);
}

void prev(void) {
    // move int *p by 1
    ptr--;
    printf("\n(prev: executed) p should point to the previous int\n ");
    print_p(ptr);
}

void save(void) {
    //save the value of p to n
    n = *ptr;
    printf("\n(save executed) ->\n n: %d\t\taddress: %d\n", n, &n);
}

void put(void) {
    // put value of n to the value p is pointing at
    *ptr = n;
    printf("copied n to the address p\n");
    print_p(ptr);
}

void add1(void) {
    // add 1 to the value p is currently pointing
    (*ptr)++;
    printf("\n(add1 executed): increment value of p by 1\n ");
    print_p(ptr);
}

void sub1(void) {
    // subtract 1 to the value p is currently pointing
    (*ptr)--;
    printf("\n(sub1 executed): decrement value of p by 1\n ");
    print_p(ptr);
}

void exec(void) {
    arr(); 
}

int main() {
    //print_p(p);
    exec();
    return 0;
}