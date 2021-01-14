#include<iostream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;

class ListEntry
{
	public:
		string entry;
	
	void enter()
	{
		cin>>entry;
		cout<<"\n";
	}
	void display()
	{
		cout<<entry;
	}	
	
};

int main()
{
	ListEntry obj[10];
	int i=0;
	char ans;
	
	x:
	cout<<"\nDo you want to add an item to the 'To-Do' list? (y/n)";
	cin>>ans;
	
	if(ans=='y')
	{
		cout<<"\nEnter the work you have to do.";
		obj[i].enter();
		i=i+1;
		goto x;
	}
	
	cout<<"\t\tTO-DO LIST\t\t\t\t\n";
	cout<<setw(4)<<"S.NO"<<setw(36)<<"WORK TO DO";
	for(int j=0;j<i;j++)
	{
		cout<<"\n";
		cout<<setw(4)<<j+1<<setw(36);
		obj[j].display();	
	}
	return 0;
}
