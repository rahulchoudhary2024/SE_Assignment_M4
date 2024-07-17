/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class circle
{
	float r,area,circ;
	
	public:
		 void get_info() 
		{
		   cout<<"\n\n\t enter the value of radius";
		   cin>>r;	
		}
		
		void calculation_circle()
		{
			area=3.14*r*r;
			cout<<"\n\n\t area of circle="<<area; 
			
			
			circ=2*3.14*r;
			cout<<"\n\n\t circumference of circle="<<circ;
			
		}
};

main()
{
	circle obj;
	obj.get_info();
	obj.calculation_circle();
	
}
