// Reference vaiable example-1
#include<iostream>
int main()
{
	int a=50;
	int &ref=a; // syntax of refernce is=> datatype&reference variable name= variable name;
	std::cout<<a<<"\t"<<ref<<std::endl;
	std::cout<<&a<<"\t"<<&ref<<std::endl; // here we can address also same for both variables
	
}
