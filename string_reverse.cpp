#include <iostream>
#include <string>
using namespace std;

int main(){

    string* word = nullptr;


    word = new string();

    cout << "Enter a word: " <<endl;
    cin >> *word;

    for(int i = 0; i < word->length()/2; i++){

        swap((*(word))[i],(*(word))[word->length() - (i + 1)] );
    }

    cout << "reverse string is \"" << *word << "\"";

    return 0;
    
}