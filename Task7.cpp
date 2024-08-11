#include <iostream> 
#include <string>   
using namespace std; 
int main() {
    string txt;
    char search_char;
    cout << "Enter a txt: ";
    getline(cin, txt); 
    cout << "Enter a character: ";
    cin >> search_char; 
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == search_char) {
            count++;
        }
    }
    cout << "The character '" << search_char << "' appears " << count << " times in the string." << endl;
    return 0;
}