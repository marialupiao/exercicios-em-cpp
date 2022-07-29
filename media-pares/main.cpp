#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, somaPares = 0, nPares = 0;
    double mediaPares;

    cout << "Quantos elementos terao o vetor? ";
    cin >> N;

    int vet[N];

    for (int i=0; i<N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for (int i=0; i<N; i++) {
        if (vet[i] % 2 == 0){
            somaPares = somaPares + vet[i];
            nPares++;
        }
    }

    if (nPares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else {
        mediaPares = (double) somaPares / nPares;

        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << mediaPares << endl;
    }


    return 0;
}
