#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
  char b;
  cin>>b;
  if(isalpha(b))
   cout<<"Alphabet";
  else
    cout<<"No";
  return 0;
}
