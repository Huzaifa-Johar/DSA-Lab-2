#include <iostream>
using namespace std;

void analyze_pointer(int* ptr);

int main() {
    // Stack allocation
    int iValue;
    iValue = 42;
    cout << "--- Stack allocated int ---" << endl;
    analyze_pointer(&iValue);

    cout << endl;

    // Heap allocation
    int* pValue = new int();
    *pValue = 99;
    cout << "--- Heap allocated int ---" << endl;
    analyze_pointer(pValue);

    delete pValue;
    pValue = nullptr;

    return 0;
}

void analyze_pointer(int* ptr) {
    cout << " Memory Address: " << ptr << endl;
    cout << " Value at the Address: " << *ptr << endl;
}