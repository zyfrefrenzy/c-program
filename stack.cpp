/*a c++ code for a stack
NAME frenzy gatheru 
REG NO BSE-05-0163/2024
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to create a stack
vector<int> create_stack() {
    return vector<int>();
}

// check if the stack is empty
bool is_empty(const vector<int>& stack) {
    return stack.empty();
}

//  push an element onto the stack
void push(vector<int>& stack, int item) {
    stack.push_back(item);
    cout << "Pushed: " << item << endl;
}

// pop an element from the stack
int pop(vector<int>& stack) {
    if (is_empty(stack)) {
        cout << "Stack Underflow" << endl;
        return -1; // or throw an exception if preferred
    }
    int top = stack.back();
    stack.pop_back();
    return top;
}

// display the stack
void display(const vector<int>& stack) {
    cout << "Stack: ";
    for (size_t i = 0; i < stack.size(); ++i) {
        int item = stack[i];
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    vector<int> stack = create_stack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    display(stack);

    cout << "Popped: " << pop(stack) << endl;
    display(stack);

    return 0;
}
