#include "stack.h"

void push(struct Stack** stack, int value) {
    struct Stack* temp = malloc(sizeof(struct Stack));
    temp->value = value;
    temp->prev  = *stack;
    *stack = temp;
}

void pop(struct Stack** stack, int** out) {
    if(*stack == NULL) {
        *out = NULL;
        return;
    }

    **out = (*stack)->value;

    struct Stack* temp = *stack;
    *stack = (*stack)->prev;
    free(temp);
}
