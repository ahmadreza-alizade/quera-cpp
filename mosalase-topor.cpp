#include <iostream>
#include <string>
using namespace std;

const char star = '*';
const char space = ' ';

string generateSpaces(int spaceCount){
    string gen;
    for(int cursor = 0; cursor < spaceCount / 2; cursor++){

        gen += space;
    }
    return gen;
}
string generateStars(int starCount){
    string gen;
    for(int cursor = 0; cursor < starCount ; cursor++){

        gen += star;
    }
    return gen;
}

int main (){
    int spaceCount;
    int starCount;

    for(int line = 1; line <= 5; line++){
        starCount = (2 * line) - 1;
        spaceCount = 9 - starCount;

        cout << generateSpaces(spaceCount) << generateStars(starCount) << generateSpaces(spaceCount);

        cout << endl ;
    }

    return 0;
}