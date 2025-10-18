#include <iostream>
using namespace std;

class Stack {
    int arr[100], top;
public:
    Stack() { top = -1; }

    void push(int value) {
        if (top == 99) cout << "Stack Overflow\n";
        else arr[++top] = value;
    }

    void pop() {
        if (top == -1) cout << "Stack Underflow\n";
        else top--;
    }

    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }

    bool isEmpty() { return top == -1; }

    void display() {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    cout << "Top element: " << s.peek() << endl;
    return 0;
}
