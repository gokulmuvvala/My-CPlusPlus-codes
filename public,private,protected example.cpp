// public,private,protected example
#include<iostream>
class base // class name can be anything u can put your name also
{
	public:
	int x;
	private:
	int y;
	protected:
	int z;
	public:
		void display() // This is an member function
		{
			y=20; // here we are declaring the variable because inside main function we cant use private class variables 
			std::cout<<y<<std::endl;
			std::cout<<"Inside the member function from public class"<<std::endl;
		}
};
// here we are creating the derived class
class Derived:public base
{
	public:
	void display1()
	{
			z=30; // here we are declaring the variable because inside main function we cant use private class variables 
		std::cout<<z<<std::endl;
		std::cout<<"Inside the member function from protected class"<<std::endl;
	}
};
int main()
{
	base b1; // b1 object created 
	std::cout<<"Enter the value of x"<<std::endl;
	std::cin>>b1.x; 
	b1.display(); // calling the member function
	Derived d1;
	d1.display1();
	
}

