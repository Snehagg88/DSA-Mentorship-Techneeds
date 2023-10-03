#include<iostream> 
 using namespace std; 
 int main(){ 
     int n; 
     cout<<"enter your grades "<<endl; 
     cin>>n; 
     if(n>9){ 
         cout<<"excellent"<<endl; 
     } 
     else if(n>8){ 
         cout<<"good"<<endl; 
     } 
     else if(n>7){ 
         cout<<"fair"<<endl; 
     } 
     else if(n>6){ 
         cout<<"meets expectations"<<endl; 
     } 
     else{ 
         cout<<"below par"<<endl; 
     } 
 }
