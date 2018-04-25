/*Write a C++ program to create a class called STRING and Implement the following operations.
Display the result after every operation by overloading the operator <<. 
i) STRING S1= 'UPES' 
ii) STRING S2 = 'DEHRADUN' 
iii) STRING S3 = S1+S2 (Use copy constructor)*/
#include<iostream>
#include<cstring>
using namespace std;

class STRING
{
	char name[20];
	public:
	STRING(){}							 //default ctor 
	STRING(char *s)						 //parametrized ctor
	{
		strcpy(name,s);
	}
	STRING(const STRING &s)				 //copy ctor
	{
		strcpy(name,s.name);
	}
	
	friend ostream& operator <<(ostream &out,STRING &s);	 // '<<' operator overloaded
	friend istream& operator >>(istream &in,STRING &s); 	 // '>>' operator overloaded
	friend STRING& operator +(STRING &s1,STRING &s2); 		 // '+' operator overloaded
};
ostream& operator <<(ostream &out,STRING &s)
	{
		out<<s.name;
		return out;
	}
istream& operator >>(istream &in,STRING &s)
	{
		in>>s.name;
		return in;
	}
STRING& operator +(STRING &s1,STRING &s2)
	{
		STRING temp;
		strcpy(temp.name,s1.name);
		strcat(temp.name,s2.name);
		return temp;
	}

int main()
{
	STRING S1 = "UPES";
	STRING S2 = "DEHRADUN";
	STRING S3 = S1 + S2;
	cout<<S1<<endl;  
	cout<<S2<<endl;
	cout<<S3<<endl;
	
	STRING S4;
	cout<<"Enter String : ";
	cin>>S4;
	cout<<S4<<endl;
	
	return 0;
}

