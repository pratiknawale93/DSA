#include<iostream>
using namespace std;

int main()
{   

    int a,b,c;
    cout<<"Enter the value of the A : ";
    cin>>a;
    cout<<"Enter the value of B :";
    cin>>b;
    cout<<"Enter the value of C :";
    cin>>c;

    if(a>b and a>c)
    {
        cout<<"The largest no is A :  "<<a<<endl;
    }
    else if(b>c and b>a)
    {
        cout<<"The largest no is B :  "<<b<<endl;
    }
    else{
         cout<<"The largest no is C :"<<c<<endl;
    }
  
  
    int age;
    cout<<"Enter your age";
    cin>>age;
    string result=age>=18 ? "Eligible to vote" : "Not eligible to vote";
    cout<<result;


    // switch statements 

    int days=2;
    switch(days)
    {
        case 1 : cout<<"Monday";
        break;
        case 2 : cout<<"Tuesday";
        break;
        case 3 : cout<<"Wednesday";
        break;
        case 4 : cout<<"Thursday";
        break;
        case 5 : cout<<"Friday";
        break;
        case 6 : cout<<"Saturday";
        break;
        default : cout<<"Invalid Days";
    }


    // calculator Logic
    
    int a,b;
    int sign;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    


    cout<<"-----------------The Simple calculator---------------"<<endl;
    cout<<"Enter the operation : "<<endl;
    cin>>sign;
    switch(sign)
    {
        case 1 : cout<<a+b;
        break;
        case 2 : cout<<a-b;
        break;
        case 3 : cout<<a*b;
        break;
        case 4 : cout<<a/b;
        break;
    }







}