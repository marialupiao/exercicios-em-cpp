#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, posicao;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (int i=0; i<N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

       maior = vet[0];
       posicao = 0;

        for (int i=1; i<N; i++) {
        if (vet[i] > maior) {
           maior = vet[i];
           posicao = i;
        }
        }

    cout << fixed << setprecision(1) << endl;
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;



    return 0;
}
