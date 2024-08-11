#include <iostream> 
#include <string>   
using namespace std; 
int main() {
    string txt;
    int start_index, end_index;
    cout << "Enter a txt: ";
    getline(cin, txt); 
    cout << "Enter the start index: ";
    cin >> start_index;
    cout << "Enter the end index: ";
    cin >> end_index;
    if (start_index < 0 || end_index > txt.length() || start_index >= end_index) {
        cout << "Error: Invalid indices." << endl;
    } else {
        cout << "Substring from index " << start_index << " to " << end_index << ": ";
        cout << txt.substr(start_index, end_index - start_index) << endl;
    }
    return 0; 
}