#include <iostream>
using namespace std;

void pattern(int num)
{
    for(int i =0;i<num;i++)
    {
        int start=1;
        if(i%2==0)
        {
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
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