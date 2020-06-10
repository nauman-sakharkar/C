#include <stdio.h>
#include <conio.h>
void main(){
int a,b;
void swap(int *,int *);
clrscr();
printf("Enter the 2 Numbers : ");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("Numbers are Swapped : %d %d",a,b);
getch();
}
void swap(int *ptr1, int *ptr2){
int temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}
