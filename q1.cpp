// student id 1024030287
// asst1 q1
#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX];
int arrSize = 0;  

void create() {
    cout << "Enter number of elements: ";
    cin >> arrSize;

    if (arrSize > MAX || arrSize < 0) {
        cout << "Invalid size. Must be between 0 and " << MAX << ". Try again.\n";
        arrSize = 0;
        return;
    }

    cout << "Enter " << arrSize << " elements:\n";
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    cout << "Array created successfully.\n";
}

void display() {
    if (arrSize == 0) {
        cout << "Array is empty.\n";
        return;
    }

    cout << "Array elements: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    if (arrSize >= MAX) {
        cout << "Array is full. Cannot insert.\n";
        return;
    }

    int pos, val;
    cout << "Enter position to insert (0 to " << arrSize << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (pos < 0 || pos > arrSize) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = arrSize; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    arrSize++;

    cout << "Element inserted.\n";
}

void remove() {
    if (arrSize == 0) {
        cout << "Array is empty. Nothing to delete.\n";
        return;
    }

    int pos;
    cout << "Enter position to delete (0 to " << arrSize - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= arrSize) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arrSize--;

    cout << "Element deleted.\n";
}

void linearSearch() {
    if (arrSize == 0) {
        cout << "Array is empty.\n";
        return;
    }

    int val;
    cout << "Enter value to search: ";
    cin >> val;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == val) {
            cout << "Element found at index " << i << ".\n";
            return;
        }
    }

    cout << "Element not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            create();
        } else if (choice == 2) {
            display();
        } else if (choice == 3) {
            insert();
        } else if (choice == 4) {
            remove();
        } else if (choice == 5) {
            linearSearch();
        } else if (choice == 6) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
