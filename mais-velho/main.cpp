#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, maior, posicao;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    string nomes[N];
    int idades[N];

    for (int i=0; i<N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
    }

    maior = idades[0];
    posicao = 0;

    for (int i=0; i<N; i++) {
        if (idades[i] > maior) {
            maior = idades[i];
            posicao = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[posicao] << endl;

    return 0;
}
