#include <iostream> 
#include <string>   
using namespace std; 
int main() {
    string str;
    cout << "Enter a number: ";
    getline(cin, str); 
    int number = stoi(str);
    int result = number - 10;
    cout << "The result after subtracting 10 is: " << result << endl;
    return 0;
}