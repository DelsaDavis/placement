#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
  char b;
  cin>>b;
  if(isalpha(b))
  {
    if(b == 'a'||b == 'A'||b == 'e'||b == 'E'||b == 'i'||b == 'I'||b == 'o'||b == 'O'||b == 'u'|| b == 'U')
      cout<<"Vowel";
    else
      cout<<"Consonant";
  }
  else
    cout<<"Invalid";
  return 0;
}
