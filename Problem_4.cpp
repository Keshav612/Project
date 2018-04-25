/*Define a class Date, use overloaded + operator to add two 
dates and display the result.Assume non leap year dates.*/
#include<iostream>
#include<cstring>
using namespace std;


class DATE
{
	int d,m,y;
	
	public:
	DATE(int di = 0 ,int mi = 0 ,int yi = 0)
	{
		d = di;
		m = mi;
		y = yi;
		set(d,m,y);//set date according to standards
	}
	void show()//shows the date
	{
		cout<<d<<" : "<<m<<" : "<<y<<endl;
	}
	friend DATE operator +(DATE t1 ,DATE t2);
	
	private:
	void set(int &d ,int &m ,int &y)
	{
		if(d>30) // assume month of 30 days
		{
			m += (d/30);
			d = d % 30;
			if(m>12)
			{
				y += (m/12);
				m = m % 12;
			}
		}
		else
		{
			if(m>12)
			{
				y += (m/12);
				m = m % 12;
			}
		}
	}
};
DATE operator +(DATE t1 ,DATE t2)
{
	DATE TEMP(t1.d+t2.d,t1.m+t2.m,t1.y+t2.y);
	return TEMP;
}

int main()
{
	DATE c1(28,13,2018),c2(45,9,2017);
	c1.show();
	c2.show();
	DATE c3 = c1 + c2;
	c3.show();
}
