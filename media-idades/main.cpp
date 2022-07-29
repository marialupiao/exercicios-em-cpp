#include <bits/stdc++.h>


using namespace std;

int main() {

    int idade, nPessoas = 0;
    double soma = 0, media;

    cout << "Digite as idades: " << endl;
    cin >> idade;

    if (idade < 0) {
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else {
        while (idade >= 0) {
            soma = soma + idade;
            nPessoas++;
            cin >> idade;
        }

        media = soma / nPessoas;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
    }
