// Compile time Overloading example in C++
#include<iostream>

class overload
{
	public:
		overload()
		{
		
	std::cout<<"CONSTRUCTORS WITHOUT PARAMETERS"<<std::endl;
}

overload(int a)
{
	std::cout<<"CONSTRUCTORS WITH PARAMETERS"<<std::endl;
	std::cout<<"a="<<a<<std::endl;
}
// this is a member function
void add()
{
	int a,b; // members declaration
	std::cout<<"Enter the values of a and b : "<<std::endl;
	std::cin>>a;
	std::cin>>b;
	std::cout<<a+b<<std::endl;
}

void add(int x, int y)
{
	std::cout<<x+y<<std::endl;
}
};

int main()
{
	overload object; // object is created and call of constructor 1 with same class name
	overload object1(20); // a new object is created and call constructor 2 with same class name 
object.add(); 
std::cout<<"2nd member function call output : "<<std::endl;
object.add(30,40);  // passing the variables with function call
}

