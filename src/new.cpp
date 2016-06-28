#include <iostream>
using namespace std;
void display()
{
	for(int i=0;i<10;i++)
	{
		cout<<i<<endl;
	}

}
int main()
{
	cout<<"Hello world!!";
	display();	
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"One"<<endl;
			break;
		case 2: cout<<"Two"<<endl;
	}
	cout<<"Ending of program"<<endl;
	return 0;
}
