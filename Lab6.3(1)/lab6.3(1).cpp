#include <iostream>
#include <iomanip>

using namespace std;

void fillArray(int arr[], int size) {
    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << setw(4);
    }
    cout << endl;
}

int findMin(const int arr[], int size) {
    int minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

template <typename T>
T findMinTemplate(const T arr[], int size) {
    T minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArray(arr, size);
    printArray(arr, size);

    int minElement = findMin(arr, size);
    cout << "Min element in array: " << minElement << endl;

    delete[] arr;

    return 0;
}