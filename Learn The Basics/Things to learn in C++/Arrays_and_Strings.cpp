#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int i;
    cout<<"Enter Array Elements:";
    for( i=0;i<5;i++)
    {
        cin>>arr[i];
    }
      for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }

    string str;
    cout<<"\nEnter a String:";
    cin>>str;
    cout<<"First Letter of String is :"<<str[0];
    return 0;
}