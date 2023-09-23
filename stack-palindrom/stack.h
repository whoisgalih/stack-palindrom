//
//  stack.hpp
//  stack-palindrom
//
//  Created by Galih Akbar on 22/08/23.
//

#ifndef stack_h
#define stack_h

#include <iostream>

using namespace std;

const int IDXMAX = 100;

typedef char infotype;

struct stack {
    infotype info[IDXMAX];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
infotype pop(stack &S);
void printInfo(stack S);

bool isPalindrom(stack S);

#endif /* stack_h */
