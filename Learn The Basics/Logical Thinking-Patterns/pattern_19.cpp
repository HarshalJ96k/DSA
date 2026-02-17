#include <iostream>
using namespace std;

void pattern(int n)
{
     int space=0;
    for (int i=0;i<n;i++)
    {
       
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for (int j=0;j<space;j++)
        {

            cout<<" ";
           
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
         space+=2;
        cout<<endl;
    }

    space=2n-2;
    for (int i=0;i<n;i++)
    {
       
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for (int j=0;j<space;j++)
        {

            cout<<" ";
           
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
         space-=2;
        cout<<endl;
    }
}
int main ()
{
    int n;
    cout<<"Enter the No of Rows and Columns:";
    cin>>n;
    pattern(n);
    return 0;
}