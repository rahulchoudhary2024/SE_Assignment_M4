/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;

class person
{
	int age;
	string name,country;
	
	public:
		void get_info()
		{
			cout<<"\n\n\t enter the name:";
			cin>>name;
			cout<<"\n\n\t enter the age:";
            cin>>age; 			
			cout<<"\n\n\t enter the country:";
			cin>>country;
		}			
		
		void print_info()
		{
		  cout<<"\n\n\tname:"<<name;
		  cout<<"\n\n\tage:"<<age;
		  cout<<"\n\n\tcountry:"<<country;	
		}
};
main()
{
	person obj;
	obj.get_info();
	obj.print_info();
}

