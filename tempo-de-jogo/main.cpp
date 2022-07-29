#include <bits/stdc++.h>


using namespace std;

int main() {

    int inicial, final;

    cout << "Hora iniciada: ";
    cin >> inicial;
    cout << "Hora final: ";
    cin >> final;

    if (inicial < final) {
        cout << "O JOGO DUROU " << final - inicial << " HORA(S)" << endl;
    }
    else {
        cout << "O JOGO DUROU " << 24 - (inicial - final) << " HORA(S)" << endl;
    }


    return 0;
}
