#include <iostream> 
 #include <cmath> 
  
 int main() { 
     int n; 
     std::cin >> n; 
  
     for (int i = 0; i < n; ++i) { 
         for (int j = 0; j < abs(n / 2 - i); ++j) { 
             std::cout << "\t"; 
         } 
  
         int num = i + 1; 
         for (int j = 0; j < 2 * (n / 2 - abs(n / 2 - i)) + 1; ++j) { 
             std::cout << num << "\t"; 
             if (j < (n / 2 - abs(n / 2 - i))) { 
                 num++; 
             } else { 
                 num--; 
             } 
         } 
  
         std::cout << std::endl; 
     } 
  
     return 0; 
 }
