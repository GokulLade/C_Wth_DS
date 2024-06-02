#include<stdio.h>
int main()
{
  int n;
  
  printf("Enter the Number : ");
  scanf("%d",&n);
  
  int tepm1=n%10; //5
  int temp2=n/10000;
  n/=10;
  n%=10000;
  
  printf("%d%d%d",temp1,n,tepm2);
  
  
  
return 0;    
}