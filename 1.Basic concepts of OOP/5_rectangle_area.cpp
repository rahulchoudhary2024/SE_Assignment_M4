/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class rect_l
{
	protected:
		    int len;
	public:
	       void length()
		   {
		   	  len=100;
		   	  cout<<"\n\n\t length ="<<len;
			}	   	    
};

class rect_w: public rect_l
{
	int wid;
	public:
		    void width()
		    {
		    	wid=50;
		    	cout<<"\n\n\t width ="<<wid;
			}
		    
		    void area_rect()
		    {
		    	cout<<"\n\n\t area of rect:"<<len*wid;
			}
};

main()
{
	rect_w r;
	r.length();
	r.width();
	r.area_rect();
}
