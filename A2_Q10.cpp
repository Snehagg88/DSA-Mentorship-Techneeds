#include <iostream> 
  
 int main() { 
     int n; 
     std::cin >> n; 
  
     for (int i = 1; i <= n; ++i) { 
         for (int j = 1; j <= n - i; ++j) { 
             std::cout << "\t"; 
         } 
         for (int k = 1; k <= 2 * i - 1; ++k) { 
             if (k == 1 || k == 2 * i - 1) { 
                 std::cout << "*\t"; 
             } else { 
                 std::cout << "\t"; 
             } 
         } 
         std::cout << std::endl; 
     } 
  
     for (int i = n - 1; i >= 1; --i) { 
         for (int j = 1; j <= n - i; ++j) { 
             std::cout << "\t"; 
         } 
         for (int k = 1; k <= 2 * i - 1; ++k) { 
             if (k == 1 || k == 2 * i - 1) { 
                 std::cout << "*\t"; 
             } else { 
                 std::cout << "\t"; 
             } 
         } 
         std::cout << std::endl; 
     } 
  
     return 0; 
 }
