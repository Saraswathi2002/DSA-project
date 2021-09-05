/*
online IDE
https://www.onlinegdb.com/online_c++_compiler
*/

#include <iostream>

using namespace std;

int main()
{
  int num1,num2,temp;
cout<<"Enter the first number\n";
cin>>num1;
cout<<"Enter the second number\n";
cin>>num2;
temp=num1;
num1=num2;
num2=temp;
cout<<"After swapping\n";
cout<<num1<<"\t"<<num2;
    return 0;
}
/*
#output
Enter the first number
12
Enter the second number
2
After swapping
2       12
*/