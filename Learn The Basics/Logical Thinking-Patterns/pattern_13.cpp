#include<iostream>
using namespace std;

void pattern(int num)
{
    int k=1;
    for(int i =1;i<=num;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
        
    }
}
int main()
{
    int num;
    cout<<"Enter the no of rows:";
    cin>>num;
    pattern(num);
    return 0;
}