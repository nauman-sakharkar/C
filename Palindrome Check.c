#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
char n[10];int i,l,f=0;
printf("Enter the String : ");
scanf("%s",n);
l=strlen(n)-1;
for (i=0;i<l;i++,l--){
    if (n[i]!=n[l]){
        f=1;
        break;
    }
}
if (f==1){
    printf("It is not a Palindrome");}
else{
    printf("It is a Palindrome");
}
}
