/* Author name : Gokul kumar muvvala
Time: 11:04 PM
Date: 22/12/2020 */
// functions example in C++
#include<iostream>
	// Function declaration
	int add(int x,int y); // x,y are parameters(or) Aruguments
	int main()
	
	{
		int a,b; 
		std::cout<<"Enter the value of a:"<<std::endl;
		std::cin>>a;
		std::cout<<"Enter the value of b:"<<std::endl;
		std::cin>>b;
		// Function call
		add(a,b);  // a,b are aruguments 
		
		
	}
	// Function Definition
	int add(int x,int y) // x and y are parameters 
	{
		int z;
		 z= x+y;
		std::cout<< "Addition of two numbers:"<<z;
	}

