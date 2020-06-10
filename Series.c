#include <stdio.h>
#include <conio.h>
void main(){
int x,n,i,y=1;
long pow(int, int),fact(int);
clrscr();
printf("Enter the X and N : ");
scanf("%d%d",&x,&n);
for (i=1;i<=n;i++){
y=y+(pow(x,i)/fact(i));
}
printf("Seires Value: %d",y);
getch();
}
long pow(int a,int b){
int n=1,j;
for (j=0;j<b;j++){
n=n*a;}
return n;
}
long fact(int a){
if (a==1 || a==0) return 1;
else return (a*fact(a-1));
}