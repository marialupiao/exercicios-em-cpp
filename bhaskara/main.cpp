#include <bits/stdc++.h>


using namespace std;

int main() {


    double a, b, c, delta, x1, x2;

    cout << "Coeficiente A: ";
    cin >> a;
    cout << "Coeficiente B: ";
    cin >> b;
    cout << "Coeficiente C: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        cout << "Esta equacao nao possui raizes reais";
    }
    else {
        x1 = ((-b) + sqrt(delta)) / (2 * a);
        x2 = ((-b) - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
        }


    return 0;
}
