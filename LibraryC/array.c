#include <stdlib.h>
#include "array.h"

struct Array {
    Data* data;       
    size_t size;      
    FFree* free_func; 
};

Array* array_create(size_t size, FFree f) {
    Array* arr = malloc(sizeof(Array));
    if (!arr) return NULL;

    arr->data = malloc(size * sizeof(Data));
    if (!arr->data) {
        free(arr);
        return NULL;
    }

    arr->size = size;
    arr->free_func = f;  
    
    return arr;
}

void array_delete(Array* arr) {
    if (!arr) 
        return;
    
    free(arr->data);   
    free(arr);         
}

Data array_get(const Array* arr, size_t index) {
    if (!arr || index >= arr->size) 
        return (Data)0;
    
    return arr->data[index];
}

void array_set(Array* arr, size_t index, Data value) {
    if (!arr || index >= arr->size) 
        return;
    
    arr->data[index] = value;
}

size_t array_size(const Array* arr) {
    if (!arr) 
        return 0;
    
    return arr->size;
}
