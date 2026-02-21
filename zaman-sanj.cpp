#include <iostream>
using namespace std;

int main(){

    long long secends, mins, hours;
    long long sec_input;
    cin >> sec_input;

    hours = sec_input / 3600;
    mins = (sec_input % 3600) / 60;
    secends = (sec_input % 3600) % 60;

    cout << hours << " : " << mins << " : " << secends;

    return 0;
}