#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    

    if (right >= left) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

 
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }


    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 8, 9, 9, 10, 14};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    int x = 14;
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        cout << "The item does not exist" << endl;
    } else {
        cout << "The index of item is: " << result << endl;
    }

    return 0;
}