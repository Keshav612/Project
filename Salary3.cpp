//WAP TO ENTER BS,HRA,DA AND PRINT NET SALARY USING FRIEND FUNCTION
#include<iostream>
using namespace std;

class ALLOWANCE;
class TAX;

class BASIC
{
    float BS;
public:
    void input()
    {
        cout<<"\nEnter Basic Salary:";
        cin>>BS;
    }
    void show()
    {
        cout<<"\nBasic Salary="<<BS;
    }
friend void Netsal(BASIC,ALLOWANCE,TAX);
};

class ALLOWANCE
{
    float DA,HRA;
public:
    void input()
    {
        cout<<"\nDearness Allowance and House Rent Allowance:";
        cin>>DA>>HRA;
    }
    void show()
    {
        cout<<"\nDearness Allowance="<<DA<<"\nHouse Rent Allowance="<<HRA;
    }
friend void Netsal(BASIC,ALLOWANCE,TAX);
};

class TAX
{
    float TX;
public:
    void input()
    {
        cout<<"\nEnter Tax:";
        cin>>TX;
    }
    void show()
    {
        cout<<"\nTax="<<TX;
    }
friend void Netsal(BASIC,ALLOWANCE,TAX);
};

void Netsal(BASIC Bobj,ALLOWANCE Aobj,TAX Tobj)
{
	float sal;
	sal=Bobj.BS+Aobj.DA+Aobj.HRA-Tobj.TX;
	cout<<"\nNet Salary="<<sal;
}

int main()
{
	BASIC B;
	ALLOWANCE A;
	TAX T;
	B.input();
	A.input();
	T.input();
	
	B.show();
	A.show();
	T.show();
	Netsal(B,A,T);
	return 0;
}

