#include<iostream>

using namespace std;
class batsman
{
	int batsmancode;
	char batsmanname[20];
	int innings,notout,runs;
	int batsmanavg;
	void calavg()
	{
		batsmanavg=runs/(innings-notout);
	}
public :
	void readdata ();
	void displaydata();
};
void batsman::readdata ()
{
	cout<<"Enter batsman code ";
	cin>> batsmancode;
	cout<<"Enter batsman name ";
	cin>>batsmanname;
	cout<<"enter innings,notout and runs ";
	cin>>innings>>notout>>runs;
	calavg();
}
void batsman::displaydata()
{
	cout<<"Batsman code "<<batsmancode<<"\nBatsman name "<<batsmanname<<"\nInnings "<<innings
	<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batsmanavg;
}
int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();
	
	return 0;
}


