#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    
    }
    else{
        printf("loss");

    }
    if(sp==cp){
        printf("Neither profit nor loss");
    }
    return 0;
}