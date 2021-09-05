/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
int num,first=0,second=1,third;
cout<<"Enter the number n\n";
cin>>num;
cout<<first<<"\n";
cout<<second<<"\n";
for(int i=0;i<num-2;i++)
{
    third=first+second;
    cout<<third<<"\n";
    first=second;
    second=third;
}
return 0;
}
/*
Enter the number n
10
0
1
1
2
3
5
8
13
21
34
*/
