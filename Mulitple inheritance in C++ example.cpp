// Multiple inheritance in C++ example
#include<iostream>

class mother // This is base class
{
	public:
	void display() // This is a member function
	{
		std::cout<<"MOTHER CLASS"<<std::endl;
	}
};

class father //This is base class
{
	public:
	void display1() // This is a member function
	{
		std::cout<<"FATHER CLASS"<<std::endl;
	}
};
//This is a derived class
class child:public mother,public father // we should comma operator while declaring the derived class in the multiple inheritance 
{
	public:
	
	void display2()   // constructor is created in derived class
	{
		std::cout<<"CHILD DERIVED CLASS"<<std::endl;
	}
};

int main()
{
	child c1; // object created
	c1.display();
	c1.display1();
	c1.display2();
}

