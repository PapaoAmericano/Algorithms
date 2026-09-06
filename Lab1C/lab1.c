#include <stdio.h>
#include "array.h"

Array *array_create_and_read(FILE *input) {
    int n;
    fscanf(input, "%d", &n);
    Array *arr = array_create(n, NULL);
    for (int i = 0; i < n; ++i) {
        int x;
        fscanf(input, "%d", &x);
        array_set(arr, i, (Data)x);
    }
    
    return arr;
}

void task1(Array *arr) {
    size_t count = array_size(arr);
    if (count > 5) count = 5;
    for (size_t i = 0; i < count; ++i) {
        printf("%lu ", array_get(arr, i));   
    }
}

void task2(Array *arr) {
}

int main(int argc, char **argv) {
    if (argc < 2) 
        return 1;
    FILE *input = fopen(argv[1], "r");
    if (!input) 
        return 1;

    Array *arr = array_create_and_read(input);
    task1(arr);
    array_delete(arr);

    arr = array_create_and_read(input);
    task2(arr);
    array_delete(arr);

    fclose(input);
    return 0;
}
