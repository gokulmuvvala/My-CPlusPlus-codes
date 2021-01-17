// Derived class example(Single inheritance)
#include<iostream>
class Base // This is a base class(parent)
{
	public: // This is a public class
	int x,y;
	Base()// This is base constructor
	{
		std::cout<<"BASE CONSTRUCTOR"<<std::endl;
		x=10;
		y=20;
	}
};
	// This is a derived class(child)
	class Derived:public Base // syntax class derived class name:scope name parent class name
	{
		public:
		int a,b;
		Derived()
		{
			std::cout<<"DERIVED CONSTRUCTOR"<<std::endl;
			a=30;
			b=40;
		}
	};
	int main()
	{
		Derived d1; // derived class object is created it can access the both the classes
		std::cout<<"Base class Variables"<<std::endl;
		std::cout<<d1.x<<std::endl;
		std::cout<<d1.y<<std::endl;
		std::cout<<"Derived class Variables"<<std::endl;
		std::cout<<d1.a<<std::endl;
		std::cout<<d1.b<<std::endl;
		
	}
	
