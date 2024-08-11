#include <iostream> 
#include <string>   
#include <cctype>   
using namespace std; 
int main() {
    string txt;
    cout << "Enter a txt: ";
    getline(cin, txt); 
    for (int i = 0; i < txt.length(); i++) {
        txt[i] = toupper(txt[i]);
    }
    cout << "The string in uppercase is: " << txt << endl;
    return 0; 
}