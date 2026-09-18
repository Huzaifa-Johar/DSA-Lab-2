#include <iostream>
#include <cassert>
using namespace std;


bool isSorted(const int* arr, const int size);

// Test Cases

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testSortedArray passed" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testUnsortedArray passed" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testDuplicateValues passed" << endl;
}

void testSingleElement() {
    int arr[] = {7};
    bool result = isSorted(arr, 1);
    assert(result == true);
    cout << "testSingleElement passed" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testDescendingArray passed" << endl;
}

void testNegativeValues() {
    int arr[] = {-10, -5, -1, 0, 3};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testNegativeValues passed" << endl;
}

void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true);
    cout << "testEmptyArray passed" << endl;
}

void testAllEqualElements() {
    int arr[] = {4, 4, 4, 4, 4};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testAllEqualElements passed" << endl;
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualElements();

    cout << "\nAll tests passed!" << endl;
    return 0;
}

bool isSorted(const int* arr, const int size) {
    // An array with 0 or 1 elements is trivially sorted
    if (size <= 1) {
        return true;
    }

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; 
        }
    }

    return true;
}