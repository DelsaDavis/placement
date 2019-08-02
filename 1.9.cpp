#include<iostream>
using namespace std;
int main()
{
int a,b,i,sum=0;
cin>>a>>b;
int x[a];
for(i=0;i<a;i++)
cin>>x[i];
for(i=0;i<b;i++)
sum=sum+x[i];
cout<<sum;
return 0;
}
