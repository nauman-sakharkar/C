#include <stdio.h>;
void main(){
int a,sum=0,b;
printf("Enter the Number : ");
scanf("%d",&a);
b=a;
for (a;a>0;a=a-1){
sum=sum+a;
}
printf("Sum of first %d Number : %d",b,sum);
}
