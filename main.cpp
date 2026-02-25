#include <iostream>
#include <string>

using namespace std;

int main() {
    string sustantivo;
    string verbo;

    cout << "Escribe un sustantivo: ";
    cin >> sustantivo;

    cout << "Escribe un verbo: ";
    cin >> verbo; 

    cout << "El " << sustantivo << " decidio " << verbo << " en la luna!" << endl;

    return 0;
}
