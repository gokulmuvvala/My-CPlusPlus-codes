// Auto storage class example
#include<iostream>
void increment();
main()
{
	// Function call
	increment();
	increment();
	increment();
	
}
// Function definition
void increment()
{
	// here we can simply declare int the compiler will automatically consider it as Auto type of variable
	 auto int i=10; // Here we are considering i=10 intially
	i++;
		std::cout<<"i="<<i<<std::endl; // instead of /n we are using endl(end line)
}

