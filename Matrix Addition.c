#include <stdio.h>
#include <conio.h>
void main(){
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
printf("Enter the Size of Mat1(Row Column) : ");
scanf("%d%d",&r1,&c1);
printf("Enter the Size of Mat2(Row Column) : ");
scanf("%d%d",&r2,&c2);
if (r1==r2 && c1==c2){
printf("Matrix1\n");
for (i=0;i<r1;i++){
    for (j=0;j<c1;j++){
            printf("Enter the Element of row%d : ",i+1);
            scanf("%d",&a[i][j]);
}
}
printf("Matrix2\n");
for (i=0;i<r1;i++){
    for (j=0;j<c1;j++){
            printf("Enter the Element of row%d : ",i+1);
            scanf("%d",&b[i][j]);
}
}
for (i=0;i<r1;i++){
    printf("Element of row %d: ",i+1);
    for (j=0;j<c1;j++){
            printf("%d\t",b[i][j]+a[i][j]);
}
printf("\n");
}
}
else printf("Matrix cannot be Added");}
