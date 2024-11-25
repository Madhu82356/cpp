#include<stdio.h>
int main(){
    int radius ,height;
    printf("Radius of cylinders= ");
    scanf("%d",&radius);
    printf("\nheight of cylinder=");
    scanf("%d",&height);
    float volume;
    volume=3.14159*radius*radius*height;
    printf("\nvolume of cylinders=%f",volume); 
    return 0;
}

