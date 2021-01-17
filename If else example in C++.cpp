/* Author name : Gokul kumar muvvala
Time: 3:46 PM
Date: 22/12/2020 */
// If else example in c++ comparing vairables
#include<iostream>
int main()
{
	int a,b; // a and b are two vairables
	std::cout<<"Enter the values of the a and b vairable : "<<	std::endl; 
		std::cin>>a;          
		std::cin>>b;
		// TRUE Block
	if(a==b) // == is a comparison operator
	{
			std::cout<<"Both vairables are equal"<<	std::endl;
	}
	// FALSE Block
	else
	{
		std::cout<<"Both values are not equal"<< std::endl;
	}
}
