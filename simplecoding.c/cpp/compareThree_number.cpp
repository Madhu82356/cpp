#include<iostream>
using namespace std;
int main(){
    float num1,num2,num3;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"\nenter second number:";
    cin>>num2;
    cout<<"\nenter third number";
    cin>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1;
            cout<<"first number greater"<<endl;
        }
        else{
            cout<<num3;
            cout<<"third number greater"<<endl;
        } 
    }
    else{
        if(num2>num3){
            
            cout<<"second number greater"<<endl;
        }
        else{

            cout<<"third number greater"<<endl;
        }
    }
    return 0;
}