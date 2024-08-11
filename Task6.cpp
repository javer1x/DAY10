#include <iostream> 
#include <string>   
using namespace std; 
int main() {
    string txt;
    cout << "Enter a txt: ";
    getline(cin, txt); 
    for (int i = 0; i < txt.length(); i++) {
        cout << txt[i] << endl;
    }
    return 0; 
}