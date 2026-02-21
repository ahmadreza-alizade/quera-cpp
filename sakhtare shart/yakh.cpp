#include <iostream>
#include <string>
using namespace std;

int main ()
{
    const string steam = "Steam";
    const string water = "Water";
    const string ice = "Ice";

    int temp;

    cin >> temp;

    if(temp > 100)
    {
        cout << steam;
    }else if(temp < 0)
    {
        cout << ice;
    }
    else{
        cout << water;
    }


    return 0;
}