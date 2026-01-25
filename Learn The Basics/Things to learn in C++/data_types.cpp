#include<iostream>
using namespace std;

int main() {
    int num =10;
    string s = "Hello";
    char ch= 'H';
    float f=0.5;
    double d=98502357509;
    string sentence;
    getline(cin,sentence);
    cout << "You have entered :"<<sentence << endl;
    
    cout << "int :"<<num << endl;
    cout << "string :"<<s << endl;
    cout << "char :"<<ch << endl;
    cout << "float :"<<f << endl;
    cout << "double :"<<d << endl;
    return 0;
}