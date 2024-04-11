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
        cout << "Os valores n�o formam um tri�ngulo." << endl;
    } else {
        cout << "Os valores formam um tri�ngulo." << endl;

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Voc� digitou as dimens�es de um tri�ngulo equil�tero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Voc� digitou as dimens�es de um tri�ngulo is�sceles." << endl;
        } else {
            cout << "Voc� digitou as dimens�es de um tri�ngulo escaleno." << endl;
        }
    }

    return 0;
}

