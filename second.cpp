#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements!" << endl;
        return -1; 
    }

    int largest = arr[0], secondLargest = INT_MIN;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        cout << "The second largest number in the array is: " << secondLargest << endl;
    } else {
        cout << "No second largest element found!" << endl;
    }

    return 0;
}
