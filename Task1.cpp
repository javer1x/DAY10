#include<iostream>
#include<string>
using namespace std;
int main() {
    string firstname;
    string lastname;
    cout<<"Enter first name "<<endl;
    cin>>firstname;
    cout<<"Enter last name"<<endl;
    cin>>lastname;
    string fullname=firstname+ " "+lastname;
    cout<<fullname<<endl;
    return 0;
}