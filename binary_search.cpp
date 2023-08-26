#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int bin(int arr[], int start, int end, int key) {
    int mid = (start + end) / 2;

    if (start >= end) {
        return -1;
    }

    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] > key) {
        end = mid - 1;
        return bin(arr, start, end, key); 
    } else {
        start = mid + 1;
        return bin(arr, start, end, key); 
    }
}

int main() {
    int arr[30] = {4, 6, 7, 8, 9, 12, 13};
    int key = 12;
    int result = bin(arr, 0, 6, key);

    if (result != -1) {
        cout << "Key " << key << " found at index " << result << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
