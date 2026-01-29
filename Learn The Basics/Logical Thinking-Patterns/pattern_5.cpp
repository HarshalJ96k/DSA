#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int num ;
    cout<<"Enter Number:";
    cin>>num;
    pattern(num);
    return 0;
}