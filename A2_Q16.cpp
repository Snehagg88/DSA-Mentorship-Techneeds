#include<iostream> 
 using namespace std; 
 int main(){ 
     int n; 
     cin>>n; 
     for(int i=1;i<=n;i++){ 
         for(int j=1;j<=i;j++){ 
             cout<<j; 
         } 
         for(int space =1; space <= 2*n-2*i-1;space++){ 
             cout<<" "; 
         } 
         for(int k =i;k>=1;k--){ 
             if(k==n){ 
                 continue; 
             } 
             else{ 
                 cout<<k; 
             } 
         } 
         cout<<endl; 
     } 
 }
