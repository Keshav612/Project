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
    MATRIX operator +(MATRIX b)
    {
        MATRIX c;
        c.setdim(R,C);
        int i,j;
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
                c.a[i][j]=a[i][j]+b.a[i][j];
        }
        return c;
    }
    MATRIX operator *(MATRIX b)
    {
    	if(C==b.R)
    	{
        	MATRIX c;
        	c.setdim(R,b.C);
        	int i,j,k;
        	for(i=0;i<R;i++)
        	{
        		for(k=0;k<b.C;k++)
        		{
            		for(j=0;j<C;j++)
                		c.a[i][k]+=a[i][j]*b.a[j][k];
            	}
        	}
        return c;
    	}
    	else
    	cout<<"Can't Multiply"<<endl;
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
    MATRIX m1,m2,m3,m4;
    m1.setdim(2,2);
    m1.input();
    m1.show();

    m2.setdim(2,2);
    m2.input();
    m2.show();

    m3=m1+m2;
    cout<<"\nMatrix after Addition:\n";
	m3.show();
	m4=m1*m2;
    cout<<"\nMatrix after Multiplication:\n";
	m4.show();

    return 0;
}

