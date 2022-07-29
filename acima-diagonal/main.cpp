#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, somaAcima = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int matriz[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i < j){
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << somaAcima << endl;

    return 0;
}
