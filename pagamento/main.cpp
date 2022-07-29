#include <bits/stdc++.h>


using namespace std;

int main() {

    int horas;
    double valor, pagamento;
    string nome;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valor * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser de " << pagamento << endl;


    return 0;
}
