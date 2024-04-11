#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;

    cout << "Qual o valor do lado 1? ";
    cin >> lado1;

    cout << "Qual o valor do lado 2? ";
    cin >> lado2;
    
    cout << "Qual o valor do lado 3? ";
    cin >> lado3;

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Erro: Os valores dos lados devem ser maiores que zero." << endl;
    } else if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        cout << "Os valores não formam um triângulo." << endl;
    } else {
        cout << "Os valores formam um triângulo." << endl;

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Você digitou as dimensões de um triângulo equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Você digitou as dimensões de um triângulo isósceles." << endl;
        } else {
            cout << "Você digitou as dimensões de um triângulo escaleno." << endl;
        }
    }

    return 0;
}

