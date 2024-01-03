#include<iostream> 
 using namespace std; 
 int main() 
 { 
     int i,j,n; 
     cout<<"Enter n"; 
     cin>>n; 
     for(i=1;i<=n;i++){ 
         for(j=1;j<=n;j++){ 
             if(i==(n+1)/2||j==(n+1)/2){ 
                 cout<<"*  "; 
             } 
             else if(i==1&&j<(n+1)/2){ 
                 cout<<"*  "; 
             } 
             else if(i==n&&j>(n+1)/2){ 
                 cout<<"*  "; 
             } 
             else if(j==1&&i>(n+1)/2){ 
                 cout<<"*  "; 
             } 
             else if(j==n&&i<(n+1)/2){ 
                 cout<<"*  "; 
             } 
             else{ 
                 cout<<"   "; 
             } 
         } 
         cout<<endl; 
     } 
}
