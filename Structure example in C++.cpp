/*
Structure example in C++ */
#include<iostream>
struct student
{
	char name[20];
	int rollnumber;
	int display()  // member strucrture
	{
		std::cout<<"Function inside the structure "<<std::endl; //is possible only in C++ 
	}
};
int main()
{
struct student s1;
std::cout<<"Enter the name of s1"<<std::endl;
std::cin>>s1.name;
std::cout<<"Enter the roll number of"<<std::endl;
std::cin>>s1.rollnumber;

std::cout<<"Name of the s1:"<<s1.name<<std::endl;
std::cout<<"roll number of:"<<s1.rollnumber<<std::endl;
s1.display(); // member function call;	
}
