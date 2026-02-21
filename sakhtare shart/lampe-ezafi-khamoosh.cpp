#include <iostream>
using namespace std;

int main ()
{
    int area;
    cin >> area;
    
    if(area % 10 == area)
    {
        cout << "1";
    }
    else if(area % 100 == area)
    {
        cout << "2";
    }
    else if(area % 1000 == area)
    {
        cout << "3";
    }
    else if(area % 10000 == area)
    {
        cout << "4";
    }

    return 0;
}