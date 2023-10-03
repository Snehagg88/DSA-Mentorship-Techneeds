#include<iostream> 
 using namespace std; 
 int main(){ 
     int t; 
     cin>>t; 
     bool flag=0; 
     for(int i=2;i<t;i++){ 
         if(t%i==0){ 
             cout<<"non-prime"<<endl; 
             flag=1; 
             break; 
         } 
     } 
     if(flag==0){ 
         cout<<"prime"<<endl; 
     } 
     return 0; 
  
 }
