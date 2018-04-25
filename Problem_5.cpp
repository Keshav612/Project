/*Define a class to represent a bank account. Data members should include the depositor's
name, the account number (use a string), and the balance. Member functions should
allow the following:
o Creating an object and initializing it.
o Displaying the depositor's name, account number, and balance
o Depositing an amount of money given by an argument
o Withdrawing an amount of money given by an argument*/
#include<iostream>
#include<cstring>
using namespace std;

class BANK
{
	char name[20];
	char acc_no[20];
	float bal;
	public:
	BANK(char *n ,char *a ,float b)
	{
		strcpy(name,n);
		strcpy(acc_no,a);
		bal = b;
		cout<<"Account Number "<<acc_no<<" created...."<<endl;
	}
	void display()
	{
		cout<<"\tName = "<<name<<"\tAccount Number = "<<acc_no<<"\tBalance = "<<bal<<endl;
	}
	void deposit(float d)
	{
		cout<<"\tAccount Number "<<acc_no<<" Credited with Rs."<<d<<endl;
		bal += d;
	}
	void withdraw(float w)
	{
		cout<<"\tAccount Number "<<acc_no<<" Debited with Rs."<<w<<endl;
		bal -= w;
	}
	~BANK()
	{
		cout<<"Account Number "<<acc_no<<" closed...."<<endl;
	}
};
int main()
{
	BANK b1("Saurav","A001",1200);
	b1.deposit(2000);
	b1.withdraw(500);
	b1.display();
}
