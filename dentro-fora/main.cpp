#include <bits/stdc++.h>


using namespace std;

int main() {

    int N, X, dentro = 0, fora = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (int i=0; i<N; i++) {
        cout << "Digite um numero: ";
        cin >> X;

        if (X < 10 || X > 20) {
            fora++;
        }
        else {
            dentro++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;


    return 0;
}
