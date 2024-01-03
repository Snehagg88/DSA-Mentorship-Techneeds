#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=0,f=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if (i==1){
                cout<<b<<" ";
            }
            else if (i==2&&j==1){
                cout<<a<<" ";
            }
            else {
                 f=a+b;
                 cout<<f<<" ";
                 b=a;
                 a=f;
            }
        }
        cout<<endl;
    }
}
