#ifndef STACK_H
#define STACK_H

struct Stack;

Stack* stack_create();

void stack_delete(Stack* s);

void stack_push(Stack* s, int data);

int stack_get(const Stack* s);

void stack_pop(Stack* s);

bool stack_empty(const Stack* s);

#endif
