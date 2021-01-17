#include<iostream>
// default constructor example
class base
{
   public: // This is an access specifier 
   int x,y;
   /* syntax for creating a constructor is class name()
                                                    {
                                                      } */
                                                         
    base()// constructor is created 
   {
   	std::cout<<"Inside the Constructor"<<std::endl;
   	std::cout<<"Enter the value of x"<<std::endl;
   	std::cin>>x;
   	std::cout<<"Enter the value of y"<<std::endl;
   	std::cin>>y;
   	}
   	
   	void display() //member function is created 
   {
   	std::cout<<"The value of x : "<<x<<std::endl;
   	std::cout<<"The value of y : "<<y<<std::endl;
   }
   
};
int main()
{
	base d1; // d1 object is created and also compiler constructor call implicitly
	d1.display(); // member function call
}
