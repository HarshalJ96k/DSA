/**Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise. **/

#include <iostream>
using namespace std;

int main()
{
    int marks;
     cout<<"Enter your Marks: ";
    cin>>marks;
    if (marks<=100&&marks>=0)
    {
        if(marks>=90)
        {
            cout<<"You got Grade A..";
        }
        else if (marks>=70)
        {
            cout<<"You got Grade B..";
        }
        else if (marks>=50)
        {
            cout<<"You got Grade C..";
        }
        else if (marks>=35)
        {
            cout<<"You got Grade D..";
        }
        else
        {
            cout<<"Fail";
        }
    }
    else
    {
        cout<<"Invalid Marks";
    }
    return 0;
}