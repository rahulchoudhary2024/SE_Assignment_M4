/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class Bank_Account   
{
     private:   
          int a_no;
          int a_bal;
          int w,d;
     public:    
          Bank_Account() 
          {
               a_bal=1000;  
          }
          void account_details()
          {
               cout<<"\n\t Enter the Account Number : ";  
               cin>>a_no;
          }
          void print_details();    
          void account_withdraw(); 
          void account_deposit();   
};
void Bank_Account ::print_details()     
               {
                  ;
                    cout<<"\n\t Account Number : "<<a_no;
                    cout<<"\n\t Account Balance : "<<a_bal;
               }    
void Bank_Account ::account_withdraw()  
               {
                  cout<<"\n\t Enter the Withdraw Ammount: " ;
                  cin>>w;
                  a_bal = a_bal - w ;
                  cout<<"\n\t Available Balance : "<< a_bal ; 
               }
void Bank_Account ::account_deposit()  
               {
                    cout<<"\n\t Enter the Deposit Ammount : ";
                    cin>>d;
                    a_bal = a_bal + d ;
                    cout<<"\n\t Your  Updated Balance : "<< a_bal; 
               }
main()     
{
     Bank_Account b;
     b.account_details();
     b.print_details();

     b.account_deposit();

     b.account_withdraw();
  
}
