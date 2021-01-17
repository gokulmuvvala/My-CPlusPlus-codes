/* Author name : Gokul kumar muvvala
Time: 3:53 PM
Date: 22/12/2020 */
//  Else if  example in c++ comparing vairables
#include<iostream>
int main()
{
	int a,b; // a and b are two vairables
	std::cout<<"Enter the values of the a and b vairable : "<<	std::endl; 
		std::cin>>a;          
		std::cin>>b;
		// TRUE Block 1
	if(a==b) // == is a comparison operator
	{
			std::cout<<"Both vairables are equal"<<	std::endl;
	}
		// TRUE Block 2
	else if(a>b)
	{
		std::cout<<"a is greater than b"<< std::endl;
	} 
		// FALSE Block 
	else 
	{
		std::cout<<"b is greater than a"<< std::endl;
	}
}
