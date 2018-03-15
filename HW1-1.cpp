//Enhance the program to print the result of devision as a floating point number.
#include <iostream>
int main()
{
   int v1;
  int v2;
  char s;
  float result=(float)v1/v2;
  std::cout<<"Enter the first number, the operator and the second number: ";
 std::cin>>v1>>s>>v2;
 if(s=='+'){
     std::cout<<v1+v2<<std::endl;
 }
 	 if(s=='-'){
     std::cout<<v1-v2<<std::endl;
 }
	 if(s=='*'){
     std::cout<<v1*v2<<std::endl;
 }
	 if(s=='/'){
	 	
    std::cout << (float)v1/v2 << std::endl;
 }
 
return 0;
    }

