/*Design the following hierarchy: Shape — Base class,Rectangle --- Derived class of Shape,Triangle --- Derived class of Shape
 main() should show the following menu: 
 1. Rectangle 
 2. Triangle 
 3. Exit. (Enter choice:_) 
 A function calculate_area() should be made to calculate the area of the chosen shape.(Hint: Use concepts of inheritance,
 late binding, virtual functions and abstract class in the above program).*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class SHAPE//Abstract Class
{public:virtual float area() = 0;};//Pure Virtual Function

class RECTANGLE : public SHAPE//Derived class of SHAPE
{
	float l,b;
	public:
	RECTANGLE(float li=0,float bi=0)
	{
		l=li;
		b=bi;
	}
	public:
	float area()	
	{
		return l*b;
	}
};
class TRIANGLE : public SHAPE//Derived class of SHAPE
{
	float a,b,c;
	public:
	TRIANGLE(float ai=0,float bi=0,float ci=0)
	{
		a=ai;
		b=bi;
		c=ci;
	}
	public:
	float area()//Heron's formula 
	{
		float s = (a + b + c)/2;
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
};
int main()
{
	SHAPE *p;
	cout<<"1.Rectangle\n2.Triangle\n3.Exit."<<endl;
while(1)
{
	int choice;
	cout<<"\n\tEnter Choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:
			float R_l,R_b;
			cout<<"\tEnter Length : ";
			cin>>R_l;
			cout<<"\tEnter Breadth : ";
			cin>>R_b;
			p = new RECTANGLE(R_l,R_b);
			cout<<"\tArea of Rectangle = "<<p->area()<<endl;
			break;
		case 2:
			float T_a,T_b,T_c;
			cout<<"\tEnter Sides : ";
			cin>>T_a>>T_b>>T_c;
			p = new TRIANGLE(T_a,T_b,T_c);
			cout<<"\tArea of Triangle = "<<p->area()<<endl;
			break;
		case 3:
			cout<<"\n\nEXIT POINT"<<endl;
			delete p;
			exit(0);
		default:
			cout<<"\tEnter Valid Choice(1/2/3)"<<endl;
	}
}
	return 0;
}

