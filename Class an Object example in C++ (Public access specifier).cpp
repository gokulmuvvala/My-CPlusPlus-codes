#include<iostream>

class Employee
{
	public: // Declaring access specifier
	 // Declaring members in C++
	 char name[20]; 
	 int rollno;
	 // Declaring the member function 
	 void display()
	 {
	 	std::cout<<"Inside the member function from class"<<std::endl;
}
	 };
	    main()
{
	// We need declare the object for access the variables,members and member function in the class
	 	 Employee e1; // e1 object has created 
	 std::cout<<"Enter the name of Employee :"<<std::endl;
	 std::cin>>e1.name;
	 std::cout<<"Enter the roolno :"<<std::endl;
	 std::cin>>e1.rollno;
	 e1.display(); // Calling member function
	 // printing the data given by user
	 std::cout<<"Name : "<<e1.name<<std::endl;
	 std::cout<<"rollno : "<<e1.rollno<<std::endl;
}
