#include <iostream> 
#include <string>   
using namespace std; 
int main() {
    string txt;
    int index;
    cout << "Enter a string: ";
    getline(cin, txt); 
    cout << "Enter an index: ";
    cin >> index; 
    if (index >= 0 && index < txt.length()) {
        cout << "The character at index " << index << " is: " << txt[index] << endl;
    } else {
        cout << "Error: Index out of bounds." << endl;
    }
    return 0;
}