/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
int n;
int a[100],temp;
cout<<"Enter the no of element\n";
cin>>n;
cout<<"Enter the "<<n<<" number\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}
cout<<"Second largest number:\n"<<a[1];
return 0;
}
/*
Enter the no of element
4
Enter the 4 number
12
54
65
2
Second largest number:
54
*/
