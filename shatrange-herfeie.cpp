#include <iostream>
using namespace std;

int main()
{
    int shah_def = 1, vazir_def = 1, rokh_def = 2, fil_def = 2, asb_def = 2, sarbaz_def = 8; 
    signed int shah, vazir, rokh, fil, asb, sarbaz;

    cin >> shah >> vazir >> rokh >> fil >> asb >> sarbaz;

    shah = shah_def - shah;
    vazir = vazir_def - vazir;
    rokh = rokh_def - rokh;
    fil = fil_def - fil;
    asb = asb_def - asb;
    sarbaz = sarbaz_def - sarbaz;

    cout << shah << " " << vazir << " " << rokh << " " << fil << " " << asb << " " << sarbaz;

    return 0;
}