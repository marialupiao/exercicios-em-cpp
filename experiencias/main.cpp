#include <bits/stdc++.h>


using namespace std;

int main() {

    int N, ratos = 0, sapos = 0, coelhos = 0, qtdCobaias, total;
    char tipo;
    double pRatos, pSapos, pCoelhos;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    for (int i=0; i<N; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> qtdCobaias;
        cout << "Tipo de Cobaia: ";
        cin >> tipo;

        if (tipo == 'R') {
            ratos = ratos + qtdCobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + qtdCobaias;
        }
        else {
            coelhos = coelhos + qtdCobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pCoelhos = ((double) coelhos / total) * 100.0;
    pRatos = ((double) ratos / total) * 100.0;
    pSapos = ((double) sapos / total) * 100.0;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias " << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pCoelhos << endl;
    cout << "Percentual de ratos: " << pRatos << endl;
    cout << "Percentual de sapos: " << pSapos << endl;


    return 0;
}
