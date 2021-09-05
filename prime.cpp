/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
bool flag=false;
int num,first=0,second=1,third;
cout<<"Enter the number n\n";
cin>>num;
if(num>3)
{
for(int i=2;i<=2;i++)
{
    if(num%i==0)
    {
        flag= true;
        break;
    }
}
}
if(flag)
cout<<num<<" it not is prime number";
else
cout<<num<<" it is prime number";
return 0;
}
/*
Enter the number n
2
2 it is prime number
*/
