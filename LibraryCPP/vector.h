#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>

struct Vector;

Vector* vector_create();

void vector_delete(Vector* v);

int vector_get(const Vector* v, size_t index);

void vector_set(Vector* v, size_t index, int value);

size_t vector_size(const Vector* v);

void vector_resize(Vector* v, size_t size);

#endif
