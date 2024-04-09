#include <iostream>

using namespace std;

int main() {
    int Val1, Val2, temp;

    // Leitura dos valores
    cout << "Digite o valor para Val1: ";
    cin >> Val1;

    cout << "Digite o valor para Val2: ";
    cin >> Val2;

    // Troca dos valores usando uma variável temporária
    temp = Val1;
    Val1 = Val2;
    Val2 = temp;

    // Exibição dos valores trocados
    cout << "\nDepois da troca:\n";
    cout << "Val1 = " << Val1 << endl;
    cout << "Val2 = " << Val2 << endl;

    return 0;
}


