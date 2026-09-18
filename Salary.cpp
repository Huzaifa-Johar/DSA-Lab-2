#include<iostream>
using namespace std;

int main(){

    const int SIZE = 20;

    int* salArray = nullptr;
    salArray = new int[SIZE];

    cout << "Enter salaries of " << SIZE << " Employees \n";

    // loop for salaries input
    for(int i = 0; i < SIZE; i++){
        cout << "Salary of employee no. " << (i + 1) << ": ";
        cin >> *(salArray + i);
    }

    // loop for increment in salaries
    for(int i = 0; i < SIZE; i++){
        *(salArray + i) = *(salArray + i) + *(salArray + i)/(i + 1);
    }

    cout << endl;
    cout << "Updated Salaries: " << endl;
    
    // loop for displaying salaries
    for(int i = 0; i < SIZE; i++){
        cout << "Salary of employee no. " << (i + 1) << ": ";
        cout << *(salArray + i);
        cout << endl;
    }

    delete[] salArray;
    return 0;

}