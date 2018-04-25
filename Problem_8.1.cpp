//1.      Create one file and copy its contents to other file.
#include <iostream>
#include <fstream>
using namespace std;

class File
{
	ifstream fin;
	ofstream fout;
	public:
	File(char* Old,char* New)
	{
		fin.open(Old);
		fout.open(New);
	}
	void Copy()
	{
		char data[1000];
		fin.getline(data,1000);
		fout<<data;
		cout<<"Contents Copied"<<endl;
	}
	~File()
	{
		fin.close();
		fout.close();
	}

};

int main() 
{
	File f("old_file.txt","new_file.txt");
	f.Copy();
	return 0;
}
