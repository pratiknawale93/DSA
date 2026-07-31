#include<iostream>
using namespace std;

int main()
{    
    // area of square
    float side,area;
    cout<<"Enter the value of side ";
    cin>>side;
    area=(side*side);
    cout<<"The Area of Square is : "<<area<<endl;



    // gst estimate
    float item1=50, item2=60, item3=70, bill;
    bill=(item1+item2+item3);
    double gst=(bill*18/100);
    double final_bill=(bill+gst);
    cout<<"The final bill is "<<final_bill<<endl;



     // simple intest
    cout<<"----------Simple intrest-------------"<<endl;
    float principal, rate, time;
    cout<<"Enter the amount";
    cin>>principal;
    cout<<"Enter the Rate";
    cin>>rate;
    cout<<"Enter the Time";
    cin>>time;
    double si=(principal*rate*time)/100;
    cout<<"The Simple Intest will be : "<<si<<endl;
    cout<<"The Total amount to pay is :"<<principal+si;








}