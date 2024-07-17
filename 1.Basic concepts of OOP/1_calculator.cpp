/*WAP to create simple calculator using class*/

#include<iostream>
using namespace std;

class cal
{
	int nub1,nub2;
	
	public:
		void get_info()
		{
			cout<<"\n\n\t enter the nub1:";
			cin>>nub1;
			cout<<"\n\n\t enter the nub2:";
			cin>>nub2;
		}
		
		void put_calculator()
		{
			cout<<"\n\n\t addition:"<<nub1+nub2;
			cout<<"\n\n\t subtraction:"<<nub1-nub2;
			cout<<"\n\n\t multiplication:"<<nub1*nub2;
			cout<<"\n\n\t division:"<<nub1/nub2;
		}
};

main()
{
	cal obj;
	obj.get_info();
	obj.put_calculator();
}
