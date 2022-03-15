//WAP to calculate the area of rectangle by using default argument.
#include<iostream>
using namespace std;
int area(int a,int b)
{
	int result;
	result = a*b;
	return result;
}
int main()
{
	cout<<"\n The area of rectangle is "<<area(5,2)<<endl;
	return 0;
	
}
