gu//Define a class to represent a bank account. Include the following members:
#include<iostream>
using namespace std;

class bank_account
{
	private:
		   int a_num,a_bal,deposit,withdraw;
		   string a_type,a_name;
	public:
	       void account_details();
		   void deposit_money();
		   void withdraw_and_bal_chack();
		   void name_and_bal();	   
};

void bank_account :: account_details()
    {
    	cout<<"\n\t enter account holder name :";
    	cin>>a_name;
    	cout<<"\n\t enter account type:";
    	cin>>a_type;
    	cout<<"\n\t enter account number:";
    	cin>>a_num;
	}
	void bank_account :: deposit_money()
	{
		cout<<"\n\t enter deposit amount:";
		cin>>deposit;
		a_bal=a_bal+deposit;
		cout<<"\n\t depost succesfull";
		cout<<"\n\t your account balance is"<<a_bal;
		 
	}
	void bank_account :: withdraw_and_bal_chack()
	{
	    cout<<"\n\t enter withdraw amount:";
		cin>>withdraw;
		a_bal=a_bal-withdraw;
		cout<<"\n\t withdraw succesfull";
		cout<<"\n\t your account balance is"<<a_bal;
		 	
	}
	void bank_account :: name_and_bal()	
	{
		cout<<"\n\t account holder name:"<<a_name;
		cout<<"\n\t your account balance:"<<a_bal;
	}
	
main()
{
	bank_account n;
	n.account_details();
	n.deposit_money();
	n.withdraw_and_bal_chack();
	n.name_and_bal();
}						    

