#include "mylib.h"

#define LEN 12

int * myfunc() {
    int *NumArr;
    return NumArr = (int *)malloc(10 * sizeof(int));
}





int main() {
    int *vec =  (int *)malloc(10 * sizeof(int));
    int i = 0; int vect[LEN] = {0,1,2,3,4,5,6,7,8,9,10,11};
    vec = (int *) &vect;

    while (i < LEN) {
        printf("arr[%d]: %d\n", i, *(vec+i));
        ++i;
    }

    printf("%d\n", *(vec+5)); // array persist arr[5] = 5
    return 0;
}