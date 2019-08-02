#include<iostream.h>
int main
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a>b && a>c)
    cout<<a;
  elseif(b>c)
    cout<<b;
  else
    cout<<c;
  
  return 0;
}
