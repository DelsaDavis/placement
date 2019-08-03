#include<iostream>
using namespace std;
int main()
{
int a,b,m=0,flag=0,i;
cin>>a;
b=a/2;
for(i=2;i<=b;i++)
{
    if(a%i==0)
{
    cout<<"no";
    flag=1;
    break;
}
}
if(flag==0)
cout<<"yes";
return 0;
}
