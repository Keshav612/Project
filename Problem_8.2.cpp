//2.      Insert 10 students record in a file.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;
class RECORD
{
	ofstream fout;	
	public:
	RECORD()
	{
		fout.open("file.txt");
		if(!fout)
		{
			cout<<"Enable to Create File"<<endl;
			exit(0);
		}
		fout<<"\tSAPID"<<"\t\t\tNAME"<<"\t\t\tCOURSE"<<endl;	
	}
	void Write(char* sapid,char* name,char* course)
	{
		fout<<"\t"<<sapid<<"\t\t"<<name<<"\t\t"<<course<<endl;
	}
	~RECORD()
	{
		fout.close();
	}
};

int main() 
{
	RECORD r;
	char sapid[10],name[20],course[10];
	cout<<"Enter Student Details for:-";
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"\nStudent "<<i+1<<" :";
		cout<<"\n\tSapid -";
		cin>>sapid;
		cout<<"\n\tName -";
		fflush(stdin);
		gets(name);
		cout<<"\n\tCourse -";
		cin>>course;
		r.Write(sapid,name,course);
	}
	return 0;
}
