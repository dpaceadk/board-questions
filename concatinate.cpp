#include<iostream>
using namespace std;
class x
{
	string name;
	public:
		void getdata()
		{
			cout<<"Enter the string: ";
			getline(cin,name);
			fflush(stdin);
		}
		x operator + (x obj3)
		{
			x obj4;
			obj4.name = name+obj3.name;
			return obj4;
		}
		void output()
		{
			cout<<"concatinated string is: "<<name;
		}
		
};
int main()
{
	x obj1,obj2;
	obj1.getdata();
	obj2.getdata();
	obj1=obj1+obj2;
	obj1.output();
}
