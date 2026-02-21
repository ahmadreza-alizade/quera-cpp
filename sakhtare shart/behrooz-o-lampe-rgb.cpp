#include <iostream>
#include <string>
using namespace std;

int main(){
    const string ghermez = "Ghermezo Eshghe!";
    const string abi = "Abio Eshghe!";
    const string no_doost = "Doost Nadaram!";
    char a, b, c;
    string result = no_doost;

    cin >> a >> b >> c;

    if(a == 'R' && b == 'R')
    {
        result = ghermez;
    }
    else if(a == 'B' && b == 'B')
    {
        result = abi;
    }
    else if(a == 'B' && c == 'B')
    {
        result = abi;
    }

    cout << result;

    return 0;
}