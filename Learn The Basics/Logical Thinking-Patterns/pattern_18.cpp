#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i=1;i<=n;i++)
    {
        char ch='E'-i+1;
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter num of rows:";
    cin>>num;
    pattern(num);

    return 0;
}