/* Author name : Gokul kumar muvvala
Time: 6:45 PM
Date: 22/12/2020 */
// 1D example in c++ entering elements into 1D array
#include<iostream>
#define N 22 // This is macro 
int main()
{
	int i,n;
	int a[N];
	
	std::cout<<"Enter the number of elements "<<std::endl;
		std::cin>>n;
	std::cout<<"Enter the elements into array"<<std::endl;

	// entering elements into array
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
		
	}
	// entering the elements into array
	for(i=0;i<n;i++)
	{
		std::cout<<a[i];
	}
	
}
