#include <iostream>
using namespace std;

class Drzewo
{
public:
    bool czyIglaste;
    bool czyTwarde;
    int obwódPnia;
    string nazwa;

public:
    void wypisz()
    {
        cout << endl
             << "Czy drzewo jest iglaste? " << czyIglaste;
        cout << endl
             << "Czy drzewo jest twarde? " << czyTwarde;
        cout << endl
             << "Obwód pnia drzewa: " << obwódPnia;
        cout << endl
             << "Nazwa drzewa: " << nazwa;
    }
    Drzewo() : czyIglaste{0},
               czyTwarde{0},
               obwódPnia{0},
               nazwa{" "}
    {
    }
    Drzewo(bool Igly, bool Twarde, int obwod, string naz) : czyIglaste{Igly},
                                                            czyTwarde{Twarde},
                                                            obwódPnia{obwod},
                                                            nazwa{naz}
    {
    }
    Drzewo(const Drzewo &asdf) : czyIglaste{asdf.czyIglaste},
                                 czyTwarde{asdf.czyTwarde},
                                 obwódPnia{asdf.obwódPnia},
                                 nazwa{asdf.nazwa}
    {
    }
};

int main()
{
    Drzewo asdf1{true, false, 15, "lipa"}; // mimo że własności są prywatne możemy tak INICJALIZOWAC nie możemy tak zmieniać.
    int liczba{};
    // liczba {}; //tak nie
    asdf1.wypisz();
    Drzewo asdf2(1, 0, 55, "jaca");
    asdf2.wypisz();
    Drzewo asdf3(asdf2);
    asdf3.wypisz();
    return 0;
}