/* Author name : Gokul kumar muvvala
Time: 12:37 AM
Date: 24/12/2020 */
// 2D Array Example in C++ (Entering elements into 2D array and printing the elements that were entered)
#include<iostream>
#define r 100
#define c 100
int main()
{
int i,j,rows,coloumns,a[r][c];

	// Entering the rows and coloumns from the user
	std::cout<<"Enter the rows:"<<std::endl;
	std::cin>>rows;
	std::cout<<"Enter the coloumns:"<<std::endl;
	std::cin>>coloumns;
	// Entering the elements into the 2D array 
	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloumns;j++)
		{
			std::cin>>a[i][j];
		}
	}
	// printing the elements from the 2D array
	std::cout<<"Elements in the arrays:"<<std::endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<coloumns;j++)
		{
			std::cout<<a[i][j]<<"\t";
		}
		std::cout<<std::endl; // here we can use "\n" instead of endl
	}
}
