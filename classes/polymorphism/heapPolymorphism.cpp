#include <iostream>
using namespace std;

class Zwierze
{
public:
    string dajGlos;
    virtual void wydajdzwiek()
    {
    }
};
class Lew : public Zwierze
{
public:
    string zarycz;
    Lew() {};
    Lew(string zarycz)
    {
        this->zarycz = zarycz;
    }
    void wydajdzwiek()
    {
        cout << zarycz << endl;
    }
};
class Pies : public Zwierze
{
public:
    string zaszczekaj;
    Pies() {};
    Pies(string zaszczekaj)
    {
        this->zaszczekaj = zaszczekaj;
    }
    void wydajdzwiek()
    {
        cout << zaszczekaj << endl;
    }
};
class Kot : public Zwierze
{
public:
    string zamiaucz;
    Kot() {};
    Kot(string zamiaucz)
    {
        this->zamiaucz = zamiaucz;
    }

    void wydajdzwiek()
    {
        cout << zamiaucz << endl;
    }
};
int main()
{
    Zwierze *zwierzeta;
    zwierzeta = new Lew("RYK");
    zwierzeta->wydajdzwiek();
    delete zwierzeta;
    zwierzeta = new Pies("HAU");
    zwierzeta->wydajdzwiek();
    delete zwierzeta;
    zwierzeta = new Kot("MIAU");
    zwierzeta->wydajdzwiek();
    delete zwierzeta;
    return 0;
}