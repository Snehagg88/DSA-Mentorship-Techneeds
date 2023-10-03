#include<iostream> 
 using namespace std; 
 int main(){ 
     int num1,num2; 
     cin>>num1>>num2; 
     int i; 
     if (num1>num2){ 
         int i=num2; 
     } 
     else{ 
         int i=num1; 
     } 
     for(int j=i;j>1;j--){ 
         if(num1%j==0 && num2%j==0){ 
             cout<<"the gcd is "<<j<<endl; 
             int gcd=j; 
             int lcm=(num1*num2)/gcd; 
             cout<<"the lcm is "<<lcm<<endl; 
             break;     
         }     
     } 
 }
