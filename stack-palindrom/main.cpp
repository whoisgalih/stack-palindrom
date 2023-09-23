//
//  main.cpp
//  stack-palindrom
//
//  Created by Galih Akbar on 22/08/23.
//

#include "stack.h"

int main() {
    stack S;
    createStack(S);
    
    // input diakhiri dengan titik untuk berhenti
    char x;
    cin >> x;
    while (x != '.') {
        push(S, x);
        cin >> x;
    }
    
    printInfo(S);
    
    cout << "isPalindrom: " << (isPalindrom(S) == 1 ? "true" : "false") << endl;
    
    return 0;
}
