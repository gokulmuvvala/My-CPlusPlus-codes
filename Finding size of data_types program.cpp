/* MY FIRST C++ CODE
Program for finding the size of data_types in c++ */
#include<iostream> // iostream is header file in c++ used for cin and cout operations and etc...
using namespace std; // namespace is used for naming collison in c++
int main() // writing main function
{
cout<<"integer="<<sizeof(int)<<endl;      // cout is used for print the output
cout<<"unsigned integer="<<sizeof(unsigned int)<<endl;  // end1 used to end the output line if we not use the end1 then next output line will print in the same line in c we will use /n operator instead of end1
cout<<"signed integer="<<sizeof(signed int)<<endl;    // sizeof() is used for finding the size of data_type
cout<<"short int="<<sizeof(short int) <<endl;
cout<<"unsigned short int="<<sizeof(unsigned short int)<<endl;
cout<<"signed short int="<<sizeof(signed short int)<<endl;
cout<<"signed long int="<<sizeof(signed long int)<<endl;
cout<<"float="<<sizeof(float)<<endl;
cout<<"double="<<sizeof(double)<<endl;
cout<<"long double="<<sizeof(long double)<<endl;
cout<<"boolean="<<sizeof(bool)<<endl;
return 0; // return 0 we will write for saying the program is working fine
}

