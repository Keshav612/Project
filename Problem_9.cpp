/*Create a class AdvFile with member functions:
  1.Inline("foo","ghost.txt"); searches word "foo" in file "ghost.txt" and return true ,else return false.
  2.AdvFile gh("new.txt");
  	gh.Get("Ajay","MATHS"); return the marks of Name "Ajay" in Subject "MATHS".*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class AdvFile
{
	ifstream finput;
	public:
	AdvFile(){}
	AdvFile(char* file)
	{
		finput.open(file);
		if(!finput)
			cout<<"File not Opened Succesfully"<<endl;
	}
	bool Inline(char* word,char* file)
	{
		finput.open(file);
		if(!finput)
			cout<<"File not Opened Succesfully"<<endl;
		
		char temp_data[10];
		do
		{
			if(finput.eof())
				return false;
			finput>>temp_data;
		}while(strcmp(temp_data,word));
		return true;
	}
char* Get(char* name,char* subject)
	{
		
		char temp[50];
		finput.getline(temp,50);//takes file pointer to next line.

		char maths[4],ads[4],dbms[4];//we have taken three subjects.
		char name_i[10];
		do
		{
			if(finput.eof())
				return"No Such Name Found";
			finput>>name_i>>maths>>ads>>dbms;
		}while(strcmp(name,name_i));
		
		if(!strcmp(subject,"MATHS"))
			return maths;
		else if(!strcmp(subject,"ADS"))
			return ads;
		else if(!strcmp(subject,"DBMS"))
			return dbms;
		else
			return "No Such Subject Found";
	}
	public:
	~AdvFile()
	{
		finput.close();
	}
};
int main()
{
	AdvFile check;
	if(check.Inline("foo","ghost.txt"))
		cout<<"foo Found"<<endl;
	
	AdvFile gh("new.txt");
	cout<<gh.Get("Ajay","DBMS")<<endl;
	return 0;
}
/*
Save this file in your pc to check:
NAME	MATHS	ADS	DBMS
Ajay	59	67	81
Harman	75	32	55	
*/
