#include <bits/stdc++.h>


using namespace std;

int main() {

    int N, fatorial;

    cout << "Digite o valor de N: ";
    cin >> N;

    fatorial = 1;
    for (int i=N; i>0; i--) {
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}
