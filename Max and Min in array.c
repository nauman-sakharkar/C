#include <stdio.h>
#include <conio.h>
void main(){
int f1[10],n,i,max,min;
printf("Enter the Number of Elements : ");
scanf("%d",&n);
for (i=0;i<n;i++){
    printf("Enter the %d Element : ",i+1);
    scanf("%d",&f1[i]);
}
max=f1[0];
min=f1[0];
for (i=1;i<n;i++){
    if (f1[i]>max){
        max=f1[i];
    if (f1[i]<min)
        min=f1[i];
    }
}
printf("Max : %d\nMin : %d",max,min);}
