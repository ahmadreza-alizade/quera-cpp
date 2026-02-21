#include <iostream>
#include <string>
using namespace std;

int main(){
    const string bale = "Bale";
    const string na = "Na";
    int a, b, c;
    string result;
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a)
    {
        result = bale;
    }
    else 
    {
        result = na;
    }

    cout << result;

    return 0;
}