#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("length of rectangle is ");
    scanf("%d",&l);
    printf("width of rectangle is ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("Area of rectangle is greater than perimeter");
    }
    else{
        printf("Perimeter of rectangle is greater than area");
    }
    if(a==p){
        printf("Neither area is greater than perimeter");
    }
    return 0;
}