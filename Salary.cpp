/*WAP to calculate Gross salary and Tax of Employee using objects and classes
 Gives:BS,DA,HR,Tax=10% of Gross Salary.*/
#include<iostream>
using namespace std;

class EMPLOYEE
{
    float BS,DA,HR,GS;
public:
    void setData(float b,float d,float h)
    {
        BS=b;
        DA=d;
        HR=h;
    }
    void process()
    {
        GS=BS+DA+HR;
    }
    void show()
    {
        cout<<"Gross Salary="<<GS;
    }
    float getGross()
    {
        return GS;
    }
};

int main()
{

    EMPLOYEE amn;
    amn.setData(100000,50000,20000);
    amn.process();
    amn.show();
    float gs=amn.getGross();
    float tax=(gs*10)/100;
    cout<<"\nTax="<<tax;
}
