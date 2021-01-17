#include<iostream>
extern int i; // declaring extern int variable
int main()
{
	int a=10;
	std::cout<<"i="<<i<<std::endl;
	std::cout<<"a="<<a<<std::endl;
	return 0;
}
