#include <iostream>
#include <string>
using namespace std;

int main(){
    const int five7 = 5;
    const int tenS = 10;
    const int thirty = 30;
    char a, b, c;
    int result = 0;

    cin >> a >> b >> c;

    if(a == 's' || b == 's' || c == 's')
    {
        result += tenS;
    }
    if(a == '7' || b == '7' || c == '7')
    {
        result += five7;
    }
    if(a == '*' || b == '*' || c == '*')
    {
        result += thirty;
    }

    cout << result;

    return 0;
}