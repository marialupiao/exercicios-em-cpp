#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, pares = 0, qtdPares = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for (int i=0; i<N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS PARES:" << endl;
    for (int i=0; i<N; i++) {
    if (vet[i] % 2 == 0) {
        cout << vet[i] << "  ";
        qtdPares++;
    }
    }
    cout << endl;
    cout << endl << "QUANTIDADE DE PARES = " << qtdPares << endl;

    return 0;
}
