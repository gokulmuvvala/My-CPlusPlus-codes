#include<iostream>
/* function declaration */
int swap(int &x,int &y); // formal parameters  
int main()
{
	int a,b;
	std::cout<<"Enter the value of a"<<std::endl;
	std::cin>>a;
	std::cout<<"Enter the value of b"<<std::endl;
	std::cin>>b;
	std::cout<<"Before swapping"<<std::endl;
	std::cout<<a<<"\t"<<b<<std::endl;
	 swap(a,b); // function call Acctual parameters
	 std::cout<<"After swapping"<<std::endl;
	 std::cout<<a<<"\t"<<b<<std::endl;
}
// function definition 
 swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

