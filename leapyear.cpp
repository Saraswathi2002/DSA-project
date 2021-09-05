/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the year\n";
cin>>year;
if((year%4)==0 || (year%400)==0)
{
    if((year%100)!=0 || (year%400)==0)
    {
    cout<<year<<" is leap year";
    }
    else
    {
    cout<<year<<" is Not leap year";
    }
}
return 0;
}
/*
Enter the year
300
300 is Not leap year
*/
