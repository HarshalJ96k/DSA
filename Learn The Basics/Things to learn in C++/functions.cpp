#include<iostream>
using namespace std;

//pass by value
  int passByValue(int num)
{
    num +=10;
    cout<< "In the Pass By Value function:"<<num<<"\n";
    return 0;
}
//pass by reference
  int passByReference(int &num)
{
    num +=10;
    cout<< "In the Pass By Reference function:"<<num<<"\n";
    return 0;
}
int main()
{
    int num =10;
    passByValue(num);
    cout<<"In the Main:"<<num<<"\n";
    passByReference(num);
    cout<<"In the Main After Pass By Reference:"<<num;

    return 0;
}