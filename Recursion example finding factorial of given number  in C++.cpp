#include<iostream>
// function declaration
int factorial(int);
int main()
{
	int n,result;
	std::cout<<"Enter the value of n"<<std::endl;
	std::cin>>n;
	result=factorial(n); // Functiona call
	std::cout<<"Factorial for given number is : "<<result<<std::endl;
	
	
}
// function definition
int factorial(int n)
{
	if(n==1 or n==0) // base condition(exit statement) 
	return 1;
	else
	return n*factorial(n-1);
}
