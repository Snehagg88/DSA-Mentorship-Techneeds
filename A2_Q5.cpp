#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=(n+1)/2;i++){
        for(int s=1;s<=(n+1)/2-i;s++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout <<endl;
    }
    for(i=(n-1)/2;i>=1;i--){
        for(int s=1;s<=(n-1)/2-i+1;s++){
             cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
