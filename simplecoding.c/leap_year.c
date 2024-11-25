#include<stdio.h>
int main(){
    int z;
    printf("enter year :",z);
    scanf("%d",&z);
    if(z%4==0){ 
        printf("\nleap year");
        }
        else{
            printf("\nNot leap year");
        }
    return 0;
}