#include<iostream> 
 using namespace std; 
 int main(){ 
     int n; 
     cin>>n; 
     for(int i=1;i<=n;i++){ 
         if (i==(n+1)/2){ 
             for(int j=1;j<=n;j++){ 
                 cout<<"*"; 
             } 
             cout<<endl; 
             continue; 
         } 
         else if (i<(n+1)/2){ 
             for (int sp=1;sp<=(n-1)/2;sp++){ 
                 cout<<" "; 
             } 
             for(int j=1;j<=i;j++){ 
                 cout<<'*'; 
             } 
             cout<<endl; 
         } 
         else { 
             for (int sp=1;sp<=(n-1)/2;sp++){ 
                 cout<<" "; 
             } 
             for(int j=1;j<=n-i+1;j++){ 
                 cout<<'*'; 
             } 
             cout<<endl; 
  
         } 
     } 
 }
