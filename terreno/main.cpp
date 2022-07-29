#include <bits/stdc++.h>


using namespace std;

int main()
{
    double largura, comprimento, metro, area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> metro;

    area = largura * comprimento;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;

    preco = area * metro;

    cout << "Preco do terreno = " << preco << endl;

    return 0;
}
