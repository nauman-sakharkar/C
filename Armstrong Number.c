#include <stdio.h>;
void main(){
int a,r,b,s=0;
printf("Enter the Number : ");
scanf("%d",&a);
b=a;
for(a;a>0;a=a/10)
{
r=a%10;
s=s+r*r*r;}
if(b==s)
{
printf("%d is the Armstrong Number",b);}
else{
  printf("%d is NOT the Armstrong Number",b);
}
}
