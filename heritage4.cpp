#include <iostream>
#include <string.h>

using namespace std;

class Read 
{
	public:
    char id[100];
    char name[100];
    int salary;
    void setData() 
	{
		cout<<"Enter Employee id : ";
       	cin>>id;
       	cout<<"Enter Employee name : ";
       	cin>>name;
       	cout<<"Enter Employee salary :  ";
       	cin>>salary;
	}
};
class Print
{
	public:
	int experience;
	char role[100];
	void setData1()
	{
		cout<<"Enter Employee experience : ";
       	cin>>experience;
       	cout<<"Enter Employee role : ";
       	cin>>role;
		}	
};
class Employee :public  Read, public Print
{
	public:
	char add[100];	
	char email[100];
	void setData2()
	{
		cout<<"Enter Employee address : ";
       	cin>>add;
       	cout<<"Enter Employee email : ";
       	cin>>email;
       	
       	cout<<"ID : "<<id<< " Name : "<<name<<" Salary : "<<salary<<" Experience : "<<experience<<" Role : "<<role<<" Address : "<<add<<" Email : "<<email;
		}	
};

int main()
{
	Employee e1;
	e1.setData();
	e1.setData1();
	e1.setData2();
}
