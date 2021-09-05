/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"Enter the first number\n";
cin>>num1;
cout<<"Enter the second number\n";
cin>>num2;
cout<<"Enter the third number\n";
cin>>num3;
if(num1>num2 && num1>num3)
cout<<num1<<" "<<"is largest number";
else if(num2>num3)
cout<<num2<<" "<<"is largest number";
else
cout<<num3<<" "<<"is largest number";
return 0;
}
/*
Enter the first number
12
Enter the second number
32
Enter the third number
54
54 is largest number
*/
