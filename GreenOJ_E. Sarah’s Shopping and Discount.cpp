#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int items;
    cin >> items;
    double total_price=0;

    for(int i=0; i<items; i++)
    {
        double price;
        cin>>price;
        if(price<100)
        {
            total_price = total_price + price;
        }
        else if(price>=100 && price<=500)
        {
            total_price = total_price + (price -(price*.1));


        }
        else if(price>500)
        {
            total_price = total_price + (price -(price*.2));
        }

    }
    cout<<fixed<<setprecision(2)<<total_price;

    return 0;
}
