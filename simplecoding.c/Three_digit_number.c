#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter first number :");
    scanf("%d",a);
    printf("\nEnter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf(" gretest is %d",a);
    }
   else if(b>a&&b>c){
        printf(" greatest is %d",b);
    }
   else if(c>a&&c>b){
        printf(" greatest is %d",c);
    }
    return 0;
}