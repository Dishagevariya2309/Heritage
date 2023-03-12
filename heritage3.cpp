#include<iostream>
#include<string.h>
using namespace std;

class basic
{
    public:  
        char name[100];
        int id;
        char gender[100];
    
        void getBasicInfo(void)
        {
            cout<<"Enter Your Name : "; 
            cin.getline(name,20);
            cout<<"Enter Your Employee ID : ";
            cin>>id;
            cout<<"Enter Your Gender : ";
            cin >>gender;
        }
};
class diff
{
     public:  
        char diffname[100];
        char assignwork[100];
        int time;
  
        void getdiffInfo(void)
        {
            cout<<"Enter Your Department Name : "; 
      		cin >>diffname;
          	cout<<"Enter assigned work : ";
      		cin>>assignwork;
            cout<<"How many time you take  in complete your work ? : ";
            cin>>time;
        }
};
class employee: public basic, public diff
{
    public:
       
        void setData(void)
        {
            getBasicInfo();    
            getdiffInfo();  
            cout<<"Name : "<<name<<endl;     
            cout<<"Employee ID : "<<id<<endl;      
            cout<<"Gender : "<<gender<<endl;
            cout<<"Department Name : "<<diffname<<endl; 
            cout<<"Assigned Work : " <<assignwork<<endl; 
            cout<<"Time to complete work : "<<time<<endl; 
        }
};
int main()
{
    employee emp;
    emp.setData();
 
}
