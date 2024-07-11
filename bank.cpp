
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int s;
    cout<<"Welcome to the SBI sir "<<endl;
    cout<<"What you want to perform from the following :"<<endl<<"1.withdrow               2.Diposite"<<endl
    <<"3.Balance check          4.Pincode change"<<endl<<"Your ans sir : ";
    cin>>a;
    switch(a)
    {
        case 1:
            cout<<"Enter the amount you want to withdrow :";
            cin>>b;
            cout<<"Enter your pin sir :";
            cin>>c;
            cout<<"collect your case from below .";
            cout<<"You want to check your Balance :"<<endl<<"1.Yes"<<"2.Not";
            cin>>s;
            switch(s)
            {
                case 1:
                    cout<<"Hear your balance sir :";
                break;
                case 2:
                    cout<<"thank you for the coming .";
                break;
                default:
                    cout<<"you enter the wrong keyword ."<<endl<<"thank you for the visiting .";
                break;
            }
            break;
        break;
        case 2:
            cout<<"Enter the amount you want to deposite :";
            cin>>b;
            cout<<"Enter your pin sir :";
            cin>>c;
            cout<<"deposite yoar case hear .";
            cout<<"You want to check your Balance :"<<endl<<"1.Yes"<<"2.Not";
            cin>>s;
            switch(s)
            {
                case 1:
                    cout<<"Hear your balance sir :";
                break;
                case 2:
                    cout<<"thank you for the coming .";
                break;
                default:
                    cout<<"you enter the wrong keyword ."<<endl<<"thank you for the visiting .";
                break;
            }
            break;
        break;
        case 3:
            
        break;
        case 4:
            cout<<"";
        break;
        default:
            cout<<"you enterd wrong number .";
        break;
    }
    return 0;
}

