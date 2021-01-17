// Method overriding (Runtime polymorphism) example
#include<iostream>

class base
{

public:
	void display1() // This is member function
{
	std::cout<<"BASE CLASS METHOD"<<std::endl;
}
};

class derived:public base
{
	public:
	void display1()
	{
		std::cout<<"DERIVED CLASS METHOD "<<std::endl;
	}
};

int main()
{
	derived d1; // derived class object is created
	d1.display1(); // derived class member function call
	base d2;
	d2.display1(); // base class member function call
	
}
