#include <stdio.h>
#include <conio.h>
void main(){
int n;
long fact (int);
clrscr();
printf("Enter the Number : ");
scanf("%d",&n);
printf("%ld",fact(n));
getch();
}

long fact(int a){
if (a==1 || a==0) return 1;
else return (a*fact(a-1));
}