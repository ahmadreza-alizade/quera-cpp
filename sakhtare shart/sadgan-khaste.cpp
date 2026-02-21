#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_str = "", second_str = "";
    int first, second;
    string sign;
    cin >> first >> second;

    first_str += to_string(first % 10);
    first_str += to_string(((first % 100) - (first % 10)) / 10);
    first_str += to_string(first / 100);

    second_str += to_string(second % 10);
    second_str += to_string(((second % 100) - (second % 10)) / 10);
    second_str += to_string(second / 100);

    if(stoi(first_str) < stoi(second_str)){
        sign = " < ";
        cout << first << sign << second;
    }
    else if(stoi(second_str) < stoi(first_str))
    {
        sign = " < ";
        cout << second << sign << first;
    }
    else if(stoi(second_str) == stoi(first_str))
    {
        sign = " = ";
        cout << first << sign << second;
    }

    return 0;
}