#include <iostream>
#include <fstream>

#include "Carte.h"
#include "Autor.h"
#include "Imprumut.h"
#include "Cititor.h"

#include "DBMS.h"

using namespace std;

int main()
{
    // DBMS app;
    // app.run();

    Autor a;
    a.setNume("George");
    a.setAutorId(1000);
    Carte c1("O minte clara", "Betterself", a.getAutorId()),
        c2("Clasa se construieste", "Stelara", a.getAutorId()),
        c3, c4, c5;
    a.adaugaCarte(c1);
    a.adaugaCarte(c2);
    cout << a;

    c1 = c2;
    cout << " >> Introduceti o noua carte pentru autorul " << a.getNume() << " (id=" << a.getAutorId() << ")\n";
    cin >> c3;
    // cout << "*";
    a.adaugaCarte(c3);
    cout << " >> Ati introdus cartea:\n"
         << c3 << endl;
    a.eliminaCarte(2);

    Cititor ana("Ana");
    Data d;
    d.zi=3;
    d.luna=3;
    d.an=2020;

    if (!c3.getEsteImprumutata())
    {
        Imprumut imprumut;
        imprumut = ana.imprumutaCarte(c3, d);
        c3.aFostImprumutata();
        cout << " >> " << ana << " .. a imprumutat" << c3;
        cout << " .. iar obiectul Imprumut creat este " << imprumut << endl;

        imprumut.prelungesteImprumut(3);
        cout << " >> Prelungim imprumutul cu 3 zile." << imprumut << endl;
    }

    return 0;
}
