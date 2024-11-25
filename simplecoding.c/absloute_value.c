#include<stdio.h>
int main(){
    int num;
    printf("enter an integer number",num);
    scanf("%d",&num);
    if(num<0){
     num=num*(-1);
    }
    printf("\nthe absloute number is:%d",num);
    return 0;
}