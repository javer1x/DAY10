#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, substr;
    
    cout << "Enter the main string: ";
    cin >> str;
    
    cout << "Enter the substring: ";
    cin >> substr;
    
    size_t index = str.find(substr);
    
    if (index != string::npos) {
        cout << index << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
