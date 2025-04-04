#include <iostream>
using namespace std;

class Shape {
public:
    int wysokosc;

    Shape() : wysokosc(0) {}
    Shape(int h) : wysokosc(h) {}

    virtual double oblicz() {
        return 0; // bazowa wersja
    }

    virtual ~Shape() {} // wirtualny destruktor dla bezpiecznego dziedziczenia
};

class Roller : public Shape {
public:
    int promien;

    Roller() : promien(0) {}
    Roller(int h, int r) : Shape(h), promien(r) {}

    double oblicz() override {
        double wynik = (3.14 * promien) * wysokosc;
        cout << "\nObjetosc walca: " << wynik;
        return wynik;
    }
};

class Cone : public Roller {
public:
    Cone() {}
    Cone(int h, int r) : Roller(h, r) {}

    double oblicz() override {
        double wynik = ((3.14 * promien) * wysokosc) / 3;
        cout << "\nObjetosc stozka: " << wynik;
        return wynik;
    }
};

class Cuboid : public Shape {
public:
    int dlugosc1;
    int dlugosc2;

    Cuboid() : dlugosc1(0), dlugosc2(0) {}
    Cuboid(int h, int d1, int d2) : Shape(h), dlugosc1(d1), dlugosc2(d2) {}

    double oblicz() override {
        double wynik = (dlugosc1 * dlugosc2) * wysokosc;
        cout << "\nObjetosc prostopadloscianu: " << wynik;
        return wynik;
    }
};

int main() {
    // Roller
    Shape* s1 = new Roller(4, 6);
    s1->oblicz();
    delete s1;

    // Cone
    Shape* s2 = new Cone(5, 4);
    s2->oblicz();
    delete s2;

    // Cuboid
    Shape* s3 = new Cuboid(5, 5, 4);
    s3->oblicz();
    delete s3;

    cout << endl;
    return 0;
}