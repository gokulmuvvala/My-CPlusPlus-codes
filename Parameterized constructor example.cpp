#include<iostream>
// parameterized constructor example
class base
{
   public: // This is an access specifier 
   int x,y;
   /* syntax for creating a constructor is class name()
                                                    {
                                                      } */
                                                         
    base(int a,int b)// constructor is created 
   {
   	std::cout<<"Inside the Constructor"<<std::endl;
      x=a;
      y=b;
   	}
   	
   	void display() //member function is created 
   {
   	std::cout<<"The value of x : "<<x<<std::endl;
   	std::cout<<"The value of y : "<<y<<std::endl;
   }
   
};
int main()
{
	base d1(10,20); // d1 object is created and also compiler constructor call implicitly
	d1.display(); // member function call
}
