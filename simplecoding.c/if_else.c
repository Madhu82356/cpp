#include<stdio.h>
int main(){
    int num;
    printf("enter positve number:",num);
    scanf("%d",&num);
    if(num%2==0){
        printf("\neven number");
    }
    else{
        printf("\nodd number");
    }
    return 0;
}