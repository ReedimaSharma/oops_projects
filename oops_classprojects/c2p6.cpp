#include<iostream>
using namespace std;
int count = 0;
class Text {
    private : 
    string str;
    public: 
Text() {
    cout<<"Enter a string : ";
    cin>>str;
}
void length() {
while(str[count] != '\0') {
    count ++;
}

cout<<"Length of string is : "<<count<<endl;
}

};
int main() {
    Text t;
     t.length();
}