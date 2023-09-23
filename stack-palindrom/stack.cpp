//
//  stack.cpp
//  stack-palindrom
//
//  Created by Galih Akbar on 22/08/23.
//

#include "stack.h"

void createStack(stack &S) {
    S.top = -1;
}

bool isEmpty(stack S) {
    return S.top == -1;
}

bool isFull(stack S) {
    return S.top == IDXMAX - 1;
}

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(stack &S) {
    if (!isEmpty(S)) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    
    return NULL;
}

void printInfo(stack S) {
    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}


bool isPalindrom(stack S1) {
    stack S2;
    createStack(S2);
    
    int n = S1.top + 1;
    int half = n / 2;
    
    
    for (int i = 0; i < half; i++) {
        infotype x = pop(S1);
        push(S2, x);
    }
    
    if (n % 2 == 1) {
        pop(S1);
    }
    
    for (int i = 0; i < half; i++) {
        infotype x = pop(S1);
        infotype y = pop(S2);
        
        if (x != y) {
            return false;
        }
    }
    
    return true;
}
