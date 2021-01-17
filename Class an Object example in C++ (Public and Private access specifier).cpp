#include<iostream>

class Employee
{
	private: // Declaring access specifier
	 // Declaring members in C++
	 char name[20]; 
	 int rollno;
	 public: // because there is an member function call in inside main(or)outside the class
	 // Declaring the member function 
	 void display()
	 {
	 	std::cout<<"Inside the member function from class"<<std::endl;
	 	 std::cout<<"Enter the name of Employee :"<<std::endl;
	 std::cin>>name;
	 std::cout<<"Enter the roolno :"<<std::endl;
	 std::cin>>rollno;
	 // printing the data given by user
	 std::cout<<"Name : "<<name<<std::endl;
	 std::cout<<"rollno : "<<rollno<<std::endl;
}
	 };
	    main()
{
	// We need declare the object for access the variables,members and member function in the class
	 	 Employee e1; // e1 object has created 
	
	 e1.display(); // Calling member function
	 
	 
}
