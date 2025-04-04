
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
class dane
{
private:
    double radius;
    double height;
    friend class cylinder;

public:
    void setPromien(double r) { radius = r; }
    double getPromien() { return radius; }

    void setWysokosc(double h) { height = h; }
    double getWysokosc() { return height; }
};
class cylinder
{
public:
    double volume(dane data)
    {
        return (M_PI * pow(data.radius, 2)) * data.height;
    };
};
class cone
{
public:
    double volume(dane data)
    {
        return ((1.0 / 3) * (M_PI)) * pow(data.getPromien(), 2) * data.getWysokosc();
    }
};
int main()
{
    dane data;
    data.setPromien(3);
    data.setWysokosc(5);
    cylinder clinder;
    cout << "Objętość walca: " << clinder.volume(data) << endl;
    data.setPromien(6);
    data.setWysokosc(3);
    cone enoc;
    cout << "Objętość stożka: " << enoc.volume(data) << endl;
    return 0;
}
