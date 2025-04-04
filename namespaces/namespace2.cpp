#include <iostream>
using namespace std;
namespace dawneMiary
{
    const float piedz = 20;
    const float lokiec = 60;
    const float sazen = 200;
}

int main()
{
    float wzrost;
    cout << "podej wzrost w centymetrach a przedstawie go dawnymi miarami" << endl;
    cin >> wzrost;
    cout << "twoj wzrost to " << wzrost / dawneMiary::piedz << " piedzi" << endl;
    cout << "twoj wzrost to " << wzrost / dawneMiary::lokiec << " lokci" << endl;
    cout << "twoj wzrost to " << wzrost / dawneMiary::sazen << " sazni" << endl;
    return 0;
}