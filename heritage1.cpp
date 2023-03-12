#include<iostream>
#include<string.h>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"hello.....! my daughter"<<endl;
		}
};
class Daughter : public Mother
{
	public:
		void display()
		{
			cout<<"heyy... mamma."<<endl;
		}	
};
int main()
{
	Daughter d1;
	d1.Mother::display();
	d1.display();

}
