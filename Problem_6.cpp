//WAP to input PRICE and calculate and print DISCOUNT and NET PRICE by using DISCOUNT as Friend class and NET as friend function
#include<iostream>
using namespace std;

class DISCOUNT;

class PRICE
{
    float P;
public:
    void input()
    {
        cout<<"\nEnter Price:";
        cin>>P;
    }
    void show()
    {
        cout<<"\nPrice="<<P;
    }
friend void Net(PRICE,DISCOUNT);
friend DISCOUNT;
};

class DISCOUNT
{
    float D;
public:
    void process(PRICE obj)
    {
        D=obj.P*10/100;
    }
    void show()
    {
        cout<<"\nDiscount="<<D;
    }
friend void Net(PRICE,DISCOUNT);
};

void Net(PRICE Pobj,DISCOUNT Dobj)
{
	float net;
	net=Pobj.P-Dobj.D;
	cout<<"\nNet Price="<<net;
}

int main()
{
	PRICE p;
	p.input();
	DISCOUNT d;
	d.process(p);
	p.show();
	d.show();
	Net(p,d);
	return 0;
}

