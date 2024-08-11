#include <iostream> 
#include <string>  
using namespace std; 
int main() {
    string txt;
    cout << "Enter a txt: ";
    getline(cin, txt); 
    int index = 0;
    while (index < txt.length()){
        cout << "Index " << index << ": " << txt[index] << endl;
        index++;
    }
    return 0; 
}