/*Friend Function: WAP to read molecular values for Oxygen, Hydrogen and Sulpher in three 
different classes named Oxygen, Hydrogen and Sulpher, then find out chemical compound that 
to be formed based on the given input molecular values.*/
#include <iostream>
#include <cmath>
using namespace std;

class HYDROGEN;
class SULPHER;

class OXYGEN
{
	float o;
	public:
	OXYGEN(int oi=0)
	{
		o = oi;
	}
	friend void func(OXYGEN O,HYDROGEN H,SULPHER S);
};
class HYDROGEN
{
	float h;
	public:
	HYDROGEN(int hi=0)
	{
		h = hi;
	}
	friend void func(OXYGEN O,HYDROGEN H,SULPHER S);
};
class SULPHER
{
	float s;
	public:
	SULPHER(int si=0)
	{
		s = si;
	}
	friend void func(OXYGEN O,HYDROGEN H,SULPHER S);
};
void func(OXYGEN O,HYDROGEN H,SULPHER S)
{
	O.o /= 16;
	H.h /= 1;
	S.s /= 32;
	if(O.o<H.h&&O.o<S.s)
	{
		O.o /= O.o;
		H.h /= O.o;
		S.s /= O.o;
	}
	else if(O.o>H.h&&H.h<S.s)
	{
		O.o /= H.h;
		H.h /= H.h;
		S.s /= H.h;
	}
	else
	{
		H.h /= S.s;
		O.o /= S.s;
		S.s /= S.s;
	}
	cout<<"Emperical Formula of Compund = "<<" O("<<(int)O.o<<") H("<<(int)H.h<<") S("<<(int)S.s<<")"<<endl;
}

int main()
{
	float o,h,s;
	cout<<"Enter Molecular Mass for Oxygen,Hydrogen and Sulpher : ";
	cin>>o>>h>>s;
	OXYGEN O(o);
	HYDROGEN H(h);
	SULPHER S(s);
	func(O,H,S);
	return 0;
}

