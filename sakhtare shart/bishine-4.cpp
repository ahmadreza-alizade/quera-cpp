#include <iostream>
using namespace std;

int main ()
{
    int max, num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    if(num1 >= num2 && num1 >= num3 && num1 >= num4){
        max = num1;
    }
    else if(num2 >= num1 && num2 >= num3 && num2 >= num4){
        max = num2;
    }
    else if(num3 >= num1 && num3 >= num2 && num3 >= num4){
        max = num3;
    }
    else if(num4 >= num1 && num4 >= num2 && num4 >= num3){
        max = num4;
    }

    cout << max;
    
    return 0;
}