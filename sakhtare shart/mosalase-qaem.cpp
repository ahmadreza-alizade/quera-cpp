#include <iostream>
#include <string>
using namespace std;

int main(){
    const string bale = "Bale";
    const string na = "Na";
    int a, b, c;
    string result;

    cin >> a >> b >> c;

    if((a == 90 || b == 90 || c == 90) && (a + b) + c == 180 && a != 0 && b != 0 && c != 0)
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