//Write a program which will allow user to input a valid arithmetic expression <number operation number> and will print out the result. 
#include <iostream>
int main()
{
   int v1;
  int v2;
  char s;
  std::cout<<"Enter the first number, operator and the second number:  ";
 std::cin>>v1>>s>>v2;
 if(s=='+'){
     std::cout<<v1+v2;
 }
 	 if(s=='-'){
     std::cout<<v1-v2;
 }
	 if(s=='*'){
     std::cout<<v1*v2;
 }
	 if(s=='/'){
     std::cout<<v1/v2;
 }
    }

