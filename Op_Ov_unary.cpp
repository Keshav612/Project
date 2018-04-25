#include<iostream>
using namespace std;
class MATRIX
{
    int a[100][100],R,C;
    public:
    void setdim(int r,int c)
    {
        R=r;
        C=c;
    }
    void input()
    {
        cout<<"Enter element:\n";
        int i,j;
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
                cin>>a[i][j];
        }
    }
    void operator ++()//For postfix (++P)
    {
    	int i,j;
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
                a[i][j]++;
        }
    }
    void operator ++(int)//For prefix (P++)
    {
    	int i,j;
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
                a[i][j]++;
        }
    }
   
    void show()
    {
        int i,j;
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
                cout<<" "<<a[i][j];
            cout<<"\n";
        }
    }
};

int main()
{
    MATRIX m1;
    m1.setdim(2,2);
    m1.input();
    m1++;
    m1.show();

    return 0;
}

