#include <iostream>

template <typename T2, typename T1>
class Komorka
{
public:
    T1 cena_max;
    T2 cena_min;
    Komorka(T1 cena_max, T2 cena_min) : cena_max(cena_max), cena_min(cena_min) {}
    T1 srednia_cena() const { return (cena_max + cena_min) / 2; }
};

template <>
class Komorka<float, double>
{
public:
    double cena_max;
    float cena_min;
    Komorka(double cena_max, float cena_min) : cena_max(cena_max), cena_min(cena_min) {}
    double srednia_cena() const { return (cena_max + cena_min) / 2; }
};

int main()
{
    Komorka<int, float> komorka1(10, 5.5f);
    std::cout << "Średnia cena (int, float): " << komorka1.srednia_cena() << '\n';
    Komorka komorka1n(10, 5.5f);
    std::cout << "Średnia cena (int, float): " << komorka1.srednia_cena() << '\n';

    Komorka<float, double> komorka2(15.5f, 10.0);
    std::cout << "Średnia cena (float, double): " << komorka2.srednia_cena() << '\n';
    Komorka komorka2n(15.5f, 10.0);
    std::cout << "Średnia cena (float, double): " << komorka2.srednia_cena() << '\n';

    return 0;
}