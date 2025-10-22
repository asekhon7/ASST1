// student id 1024030287
// asst1 q2
#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX];
int size;

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> size;

    if (size > MAX) {
        cout << "Size exceeds limit.\n";
        size = 0;
        return;
    }

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeDuplicates() {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Reduce size
            } else {
                j++; // Only increment if no deletion
            }
        }
    }

    cout << "Duplicates removed. Unique elements remain.\n";
}

int main() {
    inputArray();
    cout << "Original ";
    displayArray();

    removeDuplicates();

    cout << "After removing duplicates ";
    displayArray();

    return 0;
}
