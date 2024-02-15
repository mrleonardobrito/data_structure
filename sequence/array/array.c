#include <stdlib.h>
#include <stdio.h>
#include "sequence_array.h"

int* build_array(int x) {
    int* array = (int *)malloc(x * sizeof(int));
    if(array == NULL) {
        fprintf(stderr, "Fail on memory allocation\n");
        return NULL;
    }

    for(int i=0; i < x; i++){
        array[i] = 0;
    }

    array[x] = -1;

    return array;
}

int len_array(int* array) {
    int count = 0;

    while(array[count] != -1) {
        count++;
    }

    return count;
}

void iter_seq(int* array) {
    int count = 0;
    while(array[count] != -1) {
        printf("Element %d: %d\n", (count+1), array[count]);
        count++;
    }
}

int get_at(int* array, int i) {
    if(i < 0 || i > len_array(array)){
        printf("Wrong index, idiot!");
        return -1;
    }
    return array[i];
}

void set_at(int* array, int i, int val) {
    if(i < 0 || i > len_array(array)){
        printf("Wrong index, idiot!");
        return;
    }

    array[i] = val;
}