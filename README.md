# Buțoi Elena Denisa, grupa

## Descrierea generala a temei alese

Am ales sa implementam o aplicatie care sa gestioneze cartile dintr-o biblioteca.

## Etapa 1

### Clasele si implementarea lor

In prima etapa, am implementat urmatoarele clase:

1. Carte
2. Autor
3. Cititor
4. Imprumut

Pentru a folosi standardele C++ am scris clasele sub forma de fisiere sursa si fisiere header
In toate clasele am implementat atat constructorii ceruti, cat si . Singurul tip de membru static l-am folosit in clasele Carte, Cititor si Autor pentru a avea carteId, cititorId si autorId diferite pentru fiecare obiect instantiat.

Ordinea in care am implementat metodele este aceiasi pentru fiecare clasa: constructori, cunstructor de copiere, gettere, setters, operatorul =, operatorii de flux, ceilalti operatori de la pasul 7, destructorul si la sfarsit functionalitatile.

Legat de operatorii de la pasul 7 ([], ++, --, <, ==) pot spune ca doar operatorul== l-am implementat cu un scop, si anume testarea egalitatii intre obiecte. Pe restul i-am implementat, deoarece asa ni s-a cerut, dar nu au un rol bine definit.

### Functionalitatile

Pentru fiecare clasa am implementat o functionalitate:

1. Carte - metoda aFostImprumutata, care are rolul de a actualiza in obiect ca aceasta care este deja imprumutata, prin setarea false a variabilei __esteImprumutata__. In etapele urmatoare ne vom folosi de acest lucru pentru gestionarea imprumuturilor.
2. Autor - metodele **adaugaCarte(Carte&)** si **eliminaCarte(int)**. Prima adauga o noua carte autorului, iar cea de-a doua elimina carte de pe un anume indice in obiectul autor.
3. Cititor - metoda **Imprumut imprumutaCarte(Carte&, Data)**. Rolul metodei este de a copia obiectul Carte in sirul **listaCartiImprumutate** din obiectul Cititor. Metoda returneaza obiectul de tip Imprumut rezultat din datele cartii, autorului si a datei.
4. Imprumut - metoda **prelungesteImprumut(int)**. Aceasta prelungeste date de returnare a cartii cu un numar de zile.

### Clasa extra 

In plus, am adaugat si o clasa DBMS (Database Management System) care va fi aplicatia finala, cu rolul de a gestiona intreaga biblioteca. Aceasta este in plus, pentru aceasta etapa, si nu este inca functionala.

### testarea claselor

**Mentionez** ca in main() am declarat obiecte din fiecare clasa si am apelat toate functionalitatile implementate, pentru a simplifica evaluarea primei etape.