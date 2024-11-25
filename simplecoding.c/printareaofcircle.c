#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius=");
    scanf("%f",&radius);
    float pi,area;
    pi=3.141592;
    area=pi*radius*radius;
    printf("Area of circle is %f",area);
    return 0; 


}