#include <iostream>
using namespace std;

int main()
{
    // for loop
    int i;
    for(i=0;i<5;i++)    // will execute 5 time
    {
        cout<<"for loop demo.\n";
    }

    // while loop
    while(i<10) // will execute 5 time
    {
        cout<<"while loop demo.\n";
        i++;
    }
    do     // will execute atleast once 
    {
        cout<<"do while loop demo.\n";
        i++;
    }while(i<10);
    return 0;
}