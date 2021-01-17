#include<iostream>
int main()
{
	int a=40,b=50;
	int &ref=a;
	ref=b;
	std::cout<<a<<"\t"<<ref<<std::endl;
	std::cout<<&a<<"\t"<<&ref<<"\t"<<&b<<std::endl;
	
}
// after executing this code u can observe that a will effect because of the line 6
