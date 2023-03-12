#include <iostream>
#include <string.h>

using namespace std;

class Animal 
{
	public:
    char name[100];
    int age;
     char name1[100];
    int age1;
    void setData() 
	{
		cout<<"Enter the name of Zebra  ";
       	cin>>name;
       	cout<<"Enter the age of Zebra  ";
       	cin>>age;
       	cout<<"Enter the name of dolphin  ";
       	cin>>name1;
       	cout<<"Enter the age of dolphin  ";
       	cin>>age1;
       	
       	
    }
};

class Zebra : public Animal 
{
		public:
    	void abc() 
		{
        	cout<<"I am a zebra named "<< name << ", " << age << " years old, from Africa." << endl;
    	}
};

class Dolphin : public Zebra
{
	public:
    	void xyz() 
		{
        	cout << "I am a dolphin named " << name1 << ", " << age1 << " years old, from the ocean." << endl;
    	}
};

int main()
	{
    	Dolphin d;
    	d.setData();
    	d.abc();
    	d.xyz();

    	return 0;
	}


