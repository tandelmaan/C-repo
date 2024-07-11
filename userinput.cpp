#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i,n;
   string name,branch;
   int no;
   cout<<"Enter the number of student : ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cout<<"Enter your name : ";
       cin>>name;
       cout<<"branch : ";
       cin>>branch;
       cout<<"no : ";
       cin>>no;
       cout<<i<<")"<<" Name is : "<<name<<" , branch is :"<<branch<<" , number is :"<<no;
       cout<<endl;
   }
    return 0;
}
