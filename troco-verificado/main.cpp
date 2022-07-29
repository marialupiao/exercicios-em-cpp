#include <bits/stdc++.h>


using namespace std;

int main() {

    double preco, dinheiro, troco, faltam;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    cout << fixed << setprecision(2);



    if (preco * quantidade > dinheiro) {
            faltam = preco * quantidade - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << faltam << " REAIS" << endl;
    }
    else {
        troco = dinheiro - preco * quantidade;
        cout << "TROCO = " << troco << endl;
    }

    return 0;
}
