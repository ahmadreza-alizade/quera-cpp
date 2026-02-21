#include <iostream>
using namespace std;

int main(){
    int number, yekan, dahgan;
    cin >> number;

    yekan = number % 10;
    dahgan = number / 10;

    cout << yekan + dahgan;

    return 0;
}