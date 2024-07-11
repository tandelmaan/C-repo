#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,d;
    int i,c;
    cout<<"Hii , I am your computer , what's your name :";
    cin>>a;
    cout<<"nice to meet you "<<a<<" what you want from below :"<<"\n1.coffy"<<"\n2.chai"<<"\n3.water"<<"\n4.black coffy"<<"\n5.votka"<<endl<<"select the number from above :";
    cin>>i;
    switch(i)
    {
        case 1:
            cout<<"ohh you choose coofy ! nice choice . ";
        break;
        case 2:
            cout<<"ohh you choose chai ! nice choice . ";
        break;
        case 3:
            cout<<"ohh you choose water ! nice choice . ";
        break;
        case 4:
            cout<<"ohh you choose black coffy ! nice choice . ";
        break;
        case 5:
            cout<<"ohh you choose votka ! nice choice .";
        break;
        default :
            cout<<"you select wrong choice sir please select from above sir .";
        break;
    }
    cout<<"\n But you have to paif first :";
    cin>>b;
    cout<<"Hear all the price :"<<"\n coffy=100"<<"\n chai=50"<<"\n water=20"<<"\n black coffy=200"<<"\n votka=500";
    cout<<"\n pay hear :";
    cin>>c;
    cout<<"Thank you sir hear your item sir :";
    cin>>d;
    cout<<"visit again";
    
    
    return 0;
}

