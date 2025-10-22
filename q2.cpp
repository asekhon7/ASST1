// student id 1024030287
// asst1 q2
#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX];
int arrSize = 0;  // renamed to avoid conflict

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> arrSize;

    if (arrSize > MAX || arrSize < 0) {
        cout << "Size exceeds limit or invalid.\n";
        arrSize = 0;
        return;
    }

    cout << "Enter " << arrSize << " elements:\n";
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    cout << "Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeDuplicates() {
    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; ) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite duplicate
                for (int k = j; k < arrSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                arrSize--;  // reduce array size
            } else {
                j++;  // increment only if no deletion
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
