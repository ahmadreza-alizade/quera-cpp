#include <iostream>
using namespace std;

int main(){
    const int w = 5, h = 4;

    int width, height, area, countOfSingles;

    cin >> width >> height;

    area = (width * 100) * (height * 100);
    countOfSingles = area / (w * h);

    cout << countOfSingles;

    return 0;
}