#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int i=1;
    while(i<=4){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}