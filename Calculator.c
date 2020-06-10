#include <stdio.h>
#include <conio.h>
void main(){
int a,b,c,ch;
char d;
do{
printf("1. Add\n2. Sub\n3. Mul\n4. Div\n");
printf("Enter the 2 Numbers : ");
scanf("%d%d",&a,&b);
printf("Enter the Choice : ");
scanf("%d",&ch);
switch(ch){
case 1 : c=a+b;break;
case 2 : c=a-b;break;
case 3 : c=a*b;break;
case 4 : c=a/b;break;
default : printf("Wrong Choice : ");
}
printf("Answer : %d\n",c);
printf("Dou You Want to Continue?(Y/N) : ");
d=getche();}
while (d=='y');
getch();
}
