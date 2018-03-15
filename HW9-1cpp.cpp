//Write a program which will input two integer - N and M. The program should "draw" a rectangle of NxM size using "*" and spaces.
#include <iostream>
int main()
{
    int i, j, rows, columns;
    

  std::cout<<"Enter the number of rows and columns: ";
   std::cin>>rows>>columns;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                std::cout<<"*";
            }
            else
            {
                std::cout<<" ";
            }
        }
       std::cout<<"\n";
    }

    return 0;
}

