#include <iostream>
using namespace std;

void pattern(int num)
{
        int space =2*(num-1);
    for(int i =1;i<=num;i++)
    {
    
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
       
        cout<<endl;
        space-=2;
    }
}
int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    pattern(num);
    return 0;
}