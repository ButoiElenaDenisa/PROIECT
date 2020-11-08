
#include <iostream>
using namespace std;

class DBMS {
    private:
    
    public:
    void showMenu() {
        cout.clear();
        cout << "1. Adauga Carte";
        cout << "2. Adauga Autor";
        cout << "3. Adauga Cititor";
        cout << "4. Adauga Imprumut";
    }
    void run() {
        bool isRunning = true;

        while (isRunning) {
            showMenu();

        }
    }
};