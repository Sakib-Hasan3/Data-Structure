#include <iostream>
using namespace std;

int main() {
    int MAXSTK = 100;  // Maximum size of the stack
    int STACK[MAXSTK];  // Array to hold stack elements
    int TOP = 0;  // Initialize TOP to 0 (indicating an empty stack)
    int ITEM;  // Variable to hold the popped item

    // Push an item onto the stack
    STACK[++TOP] = 10;  // Increment TOP and then assign the value to STACK

    // Pop operation with underflow check
    if (TOP == 0) {
        cout << "UNDERFLOW" << endl;
    } else {
        ITEM = STACK[TOP];  // Get the top item
        TOP = TOP - 1;  // Decrease TOP by 1
        cout << "Popped item: " << ITEM << endl;
    }

    return 0;
}
