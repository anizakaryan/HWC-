//Enhance the program to use "switch" operator instead of if/else
#include <iostream>
int main() {
	
   int v1;
   int v2;
   char s;
  std::cout<<"Enter the first number,operator and the second number: ";
  std::cin>>v1>>s>>v2;
 
    switch (s) 
    {
        case '+':
            std::cout << v1 << " + " << v2 << " = " << v1+v2;
            break;
        case '-':
            std::cout << v1 << " - " << v2 << " = " << v1-v2;
            break;
        case '*':
            std::cout << v1 << " * " << v2 << " = " << v1*v2;
            break;
        case '/':
            std::cout << v1 << " / " << v2 << " = " << v1/v2;
            break;
        
    }
    return 0;
    }

