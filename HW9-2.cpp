//Enhance the program to input the character to be use for "drawing"
#include <iostream>
int main()
{
    int i, j, rows, columns;
    char s;

  std::cout<<"Enter the number of rows and columns: ";
   std::cin>>rows>>columns>>s;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                std::cout<<s;
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

