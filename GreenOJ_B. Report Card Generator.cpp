#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    float avg;
    cin>>num1>>num2>>num3;
    if(num1 > 1 && num1 < 100 && num2 > 1 && num2 < 100 && num3 > 1 && num3 < 100 )
        avg = (num1+num2+num3)/3;
    if(avg>=90)
    {
        cout<<"A";
    }
    else if(avg>=80)
    {
        cout<<"B";
    }
    else if(avg>=70)
    {
        cout<<"C";
    }
    else if(avg>=60)
    {
        cout<<"D";
    }
    else if(avg<60)
    {
        cout<<"F";
    }
    else{
        cout<<"Wrong";
    }
    return 0;
}
