#include <stdio.h>
#include <conio.h>
void main(){
int n,r,rev=0;
printf("Enter the Number : ");
scanf("%d",&n);
while (n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
while (rev>0){
    r=rev%10;
    switch (r){
    case 1 : printf("One, \t");break;
    case 2 : printf("Two, \t");break;
    case 3 : printf("Three, \t");break;
    case 4 : printf("Four, \t");break;
    case 5 : printf("Five, \t");break;
    case 6 : printf("Six, \t");break;
    case 7 : printf("Seven, \t");break;
    case 8 : printf("Eight, \t");break;
    case 9 : printf("Nine, \t");break;
    case 0 : printf("Zero, \t");break;
    }
    n=n*10+r;
    rev=rev/10;
}
}
