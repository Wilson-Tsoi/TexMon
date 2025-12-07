#include "mylib.h"

#define LEN 12

int vect[LEN] = {0,1,2,3,4,5,6,7,8,9,10,11};


int * ArrAlloc (int *Arr) {
/*
copies and allocates enough space for an array any size, 
also returns a pointer that points to the start of the array;
*/
int *ArrPtr = Arr; 
printf("ArrAlloc():\n\
    Synopsis\n\
    \tint * ArrAlloc (int *Arr)\n\
    \t/* Take <Arr>[any_size] as argument, Returns pointer <ArrPtr> */\n\
    \n\t<ArrPtr> now points to <Arr[0]>.\n\
    \tArrPtr: %d\t&Arr[0]: %d\n\
    \n\t** Check <ArrPtr> and <&Arr[0]> should have the same address.\n", ArrPtr, &Arr[0]);
 return ArrPtr = (int *)malloc(sizeof(Arr)); //alloc space for Arr[any_size]
}

int * myfunc() {
    int *NumArr;
    return NumArr = (int *)malloc(10 * sizeof(int));
}





int main() {
    //int *vec =  (int *)malloc(10 * sizeof(int));
    
    //vec = (int *) &vect;
    int i = 0; 
    ArrAlloc(vect);



    while (i < LEN) {
        //printf("arr[%d]: %d\n", i, *(vec+i));
        //printf("arr[%d]: %d\n", i, *(vect+i));

        ++i;
    }

    //printf("%d\n", *(vec+5)); // array persist arr[5] = 5
    return 0;
}