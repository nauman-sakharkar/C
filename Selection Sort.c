#include <stdio.h>
#include <conio.h>
void main(){
int f1[10],n,i,j,temp;
printf("Enter the Number of Elements : ");
scanf("%d",&n);
for (i=0;i<n;i++){
    printf("Enter the %d Element : ",i+1);
    scanf("%d",&f1[i]);
}
for (i=0;i<n;i++){
    for (j=i+1;j<n;j++){
        if (f1[i]>f1[j]){
            temp=f1[i];
            f1[i]=f1[j];
            f1[j]=temp;
        }
    }
}
printf("[");
for (i=0;i<n;i++){
    printf("%d\t",f1[i]);}
    printf("]");}

