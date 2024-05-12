#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr) {
    return (ptr->top == -1);}

int isFull(struct stack *ptr) {
    return (ptr->top == ptr->size - 1);
}

void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %c to the stack\n", val);
    } else {
        ptr->arr[++ptr->top] = val;
    }
}
char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return '\0';
    } else {
        return ptr->arr[ptr->top--];
    }
}
int parenthesisMatching(char *exp) {
    struct stack sp;
    sp.size = 100;
    sp.top = -1;
    sp.arr = (char *)malloc(sp.size * sizeof(char));for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            
            push(&sp, '(');
        } 
        else if (exp[i] == ')') {
            if (isEmpty(&sp)) {
                free(sp.arr); 
                return 0;
            }
            pop(&sp);
        }
    }int result = isEmpty(&sp); 
    
    free(sp.arr); 
    return result;
}

int main() {
    char *exp = "{[(})]";

    if (parenthesisMatching(exp)) {
        printf("The parentheses are matching\n");
    } else {
        printf("The parentheses are not matching\n");
    }

    return 0;
}