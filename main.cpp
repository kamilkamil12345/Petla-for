#include <iostream>

using namespace std;

int main()
{
    string imie;
    int liczba;

    cout << "Podaj swoje imie." << endl;        cin >> imie;
    cout << "Podaj liczbe ca�kowit�." << endl;  cin >> liczba;

    for (int i = 1; i <= liczba; i++)
    {
        cout << i << ". " << imie << endl;
    }
    return 0;
}

