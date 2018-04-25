/*WAP to calculate DA,HR,Gross salary and Maximum Gross salary of Employee using objects and classes
 Gives:BS,DA=50% of BS,HR=30% of BS.*/
#include<iostream>
using namespace std;

class EMPLOYEE
{
    float BS,DA,HR,GS;
public:
    void input()
    {
        cout<<"\nEnter Basic Salary:";
        cin>>BS;
    }
    void process()
    {
        DA=BS*50/100;
        HR=BS*30/100;
        GS=BS+DA+HR;
    }
    void show()
    {
        cout<<"\nGross Salary="<<GS;
    }
    float getGross()
    {
        return GS;
    }
};

int main()
{

    EMPLOYEE E[100];
    int N,i;
    cout<<"\nEnter number of Employees:";
    cin>>N;
    for(i=0;i<N;i++)
    {
        E[i].input();
        E[i].process();
    }
    float MAX=E[0].getGross();
    for(i=0;i<N;i++)
    {
        E[i].show();
        if(MAX<E[i].getGross())
            MAX=E[i].getGross();
    }
    cout<<"\nMaximum Gross Salary ="<<MAX;
}

