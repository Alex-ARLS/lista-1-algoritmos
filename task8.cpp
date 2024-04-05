/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. */
#include <iostream>
using namespace std;

int main (){
    float dollar, real;
    double cota;

    cout << "qual o valor do dollar hoje?";
    cin >> cota;

    cout << "qual o valor vc deseja converter diretamente?";
    cin >> dollar;

    real = dollar * cota;

    cout <<"o valor que esta na cotacao atual de hoje e de : " << real;

    return 0;
}