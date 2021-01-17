// Multi-level inheritance
#include<iostream>
class Grandparent
{
	public:
void display()  // This is Constructor
{
	std::cout<<"Grand Parent class"<<std::endl;
	
	}	
};
class parent: public Grandparent
{
	public:
		void display1() // This is a member function
		{
			std::cout<<"Parent class"<<std::endl;
			
		}
};
class child: public parent
{
public:
void display2()
{
	std::cout<<"Child class"<<std::endl;
	
	}	
};
int main()
{
	child c1; // object created for derived child class
	c1.display();
	c1.display1();
	c1.display2();
}
