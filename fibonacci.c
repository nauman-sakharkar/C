#include <stdio.h>
#include <conio.h>
void main(){
int f1=0,f2=1,n,i,t;
printf("Enter the limit : ");
scanf("%d",&n);
if (n==0){
    printf("%d",f1);
}
else{
if (n==1){
    printf("%d,%d",f1,f2);
}
else{
        printf("%d,%d,",f1,f2);
for (i=1;i<n-1;i++){
    t=f2;
    f2=f2+f1;
    f1=t;
    printf("%d,",f2);
}
printf("%d",f2+f1);
}}}

