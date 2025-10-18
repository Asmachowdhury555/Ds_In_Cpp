#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;
public:
    Queue() { front = rear = -1; }

    void enqueue(int val) {
        if (rear == 99) { cout << "Queue Overflow\n"; return; }
        if (front == -1) front = 0;
        arr[++rear] = val;
    }

    void dequeue() {
        if (front == -1 || front > rear) { cout << "Queue Underflow\n"; return; }
        front++;
    }

    int peek() {
        if (front == -1 || front > rear) return -1;
        return arr[front];
    }

    bool isEmpty() { return front == -1 || front > rear; }

    void display() {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    cout << "Front element: " << q.peek() << endl;
    return 0;
}
