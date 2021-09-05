/*
https://www.onlinegdb.com/
*/
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows\n";
    cin>>n;
    m=n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m-1;j++)
       {
           cout<<" ";
       }
       for(int k=1;k<=2*i-1;k++)
       {
         cout<<"*";
       }
       m--;

      cout<<"\n";
    }
return 0;
}
/*
Enter the number of rows
5
    *
   ***
  *****
 *******
*********
*/
