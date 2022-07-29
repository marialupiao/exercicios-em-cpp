#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, homens = 0, mulheres = 0;
    double menor, maior, alturaMedia, alturaTotal = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double alturas[N];
    char generos[N];

    for (int i=0; i<N; i++) {
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> generos[i];
    }

    menor = alturas[0];
    maior = alturas[0];

    for (int i=0; i<N; i++) {
        if (alturas[i] > maior){
            maior = alturas[i];
        }
        if (alturas[i] < menor) {
            menor = alturas[i];
        }
    }

    for (int i=0; i<N; i++) {
        if (generos[i] == 'M') {
            homens++;
        }
        else {
            mulheres++;
            alturaTotal = alturaTotal + alturas[i];
        }
    }

    alturaMedia = alturaTotal / mulheres;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    cout << "Media das alturas das mulheres = " << alturaMedia << endl;
    cout << "Numero de homens = " << homens << endl;

    return 0;
}
