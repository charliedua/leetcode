struct 
Stack {
    int value;
    struct Stack* prev;
};

void
push(struct Stack** stack, int value);

void
pop(struct Stack** stack, int** out);
