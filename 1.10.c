#include<stdio.h>
int main(){
  
  int no;
  int totalDigits = 0;
 
  
  scanf("%d",&no);
  
  while(no!=0){
    
    no = no/10;
    totalDigits ++;
  }
  
  printf("%d",totalDigits);
}
