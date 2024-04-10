#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int soma = 0;

    while (num <= 10) {
        soma += num;  // Equivalente a: soma = soma + num;
        num++;
    }

    cout << "A soma dos numeros de 1 a 10 e: " << soma << endl;

    return 0;
}

