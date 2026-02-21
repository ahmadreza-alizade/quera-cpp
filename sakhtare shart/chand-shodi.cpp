#include <iostream>
#include <string>
using namespace std;

int main ()
{
    const string fail = "Fail";
    const string pass = "Pass";

    float score;
    cin >> score;

    if(score >= 10){
        cout << pass;
    }else{
        cout << fail;
    }

    return 0;
}