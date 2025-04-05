#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
  for (int i = 0; i < rozmiarTablicy; i++)
  {
    srand(time(NULL) * (i + 1));
    tablica[i] = rand() % 10;
  }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
  for (int i = 0; i < rozmiarTablicy; i++)
  {
    cout << tablica[i] << ", ";
  }
}
int elementMinimalny(int tablica[], int rozmiarTablicy)
{
  int min = tablica[0];
  for (int i = 0; i < rozmiarTablicy; i++)
  {

    if (tablica[i] < min)
    {
      min = tablica[i];
    }
  }
  return min;
}
int elementMaxymalny(int tablica[], int rozmiarTablicy)
{
  {
    int max = tablica[0];
    for (int i = 0; i < rozmiarTablicy; i++)
    {
      if (tablica[i] > max)
      {
        max = tablica[i];
      }
    }
    return max;
  }
}
int main()
{
  int liczby[10];
  wypelnijLosowo(liczby, 10);
  wypiszTablice(liczby, 10);
  cout << endl;
  cout << elementMaxymalny(liczby, 10) << endl;
  cout << elementMinimalny(liczby, 10);
  return 0;
}