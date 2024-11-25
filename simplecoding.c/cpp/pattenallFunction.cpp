#include<iostream>
using namespace std;
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print3(int n){int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<val<<" ";
        val=val+1;
        }
        cout<<endl;
    }
}
void print(int n){
    
}
int main(){
    int n;
    cin>>n;
    print3(n);
    return 0;
}