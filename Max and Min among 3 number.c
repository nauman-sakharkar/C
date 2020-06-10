#include <stdio.h>
#include <conio.h>
void main(){
int a,b,c;
int max(int,int,int);
int min(int,int,int);
printf("Enter the 3 Numbers : ");
scanf("%d%d%d",&a,&b,&c);
printf("Max : %d\n",max(a,b,c));
printf("Min : %d",min(a,b,c));
}
int max(int a, int b, int c){
if (a>=b && a>=c){
    return(a);
}
else{
    if (b>=c){
        return (b);
    }
    else{
        return(c);
    }
}
    }
int min(int a, int b, int c){
if (a<=b && a<=c){
    return(a);
}
else{
    if (b<=c){
        return (b);
    }
    else{
        return(c);
    }
}
    }
