#include<stdio.h>
int main(){
    float sp,cp;
    printf("Enter cost price :",cp);
    scanf("%f",&cp);
    printf("Enter selling price :",sp);
    scanf("%f",&sp);
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("loss");
    }
    return 0;
}