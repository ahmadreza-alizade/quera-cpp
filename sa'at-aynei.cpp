#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    a = (12 - a) % 12;
    b = (60 - b) % 60;
    
    cout << setw(2) << setfill('0') << a << ':';
    cout << setw(2) << setfill('0') << b;    
    return 0;
}
