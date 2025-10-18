#include <iostream>
using namespace std;

int arr[100];
int size = 0;

void insertElement(int value) {
    arr[size++] = value;
}

void deleteElement(int value) {
    int pos = -1;
    for (int i = 0; i < size; i++)
        if (arr[i] == value) pos = i;

    if (pos != -1) {
        for (int i = pos; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
}

int searchElement(int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value) return i;
    return -1;
}

void displayArray() {
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    insertElement(10);
    insertElement(20);
    insertElement(30);
    displayArray();

    deleteElement(20);
    displayArray();

    cout << "Index of 30: " << searchElement(30) << endl;
    return 0;
}
