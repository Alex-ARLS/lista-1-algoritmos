#include <iostream>
/* Leia o valor de uma compra nas Lojas Sua Melhor
 Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário.
 A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.
é necessário se atentar as mensagens de erro
caso o numero de parcelas seja maior que 10.
 */

using namespace std;
int main (){
    cout << "ola seja bem vindo, as lojas Sua Melhor Compra \n";
    cout << "digite Enter para continuar sua simulacao de parcelas de seu produto: \n";
    cin.get();

    int numeroParcelas;
    double valorParcelas;
    cout << "por gentileza digite em quantas parcelas vc quer parcelar;\n";
    cin >> numeroParcelas;

        if (numeroParcelas <= 0 || numeroParcelas >= 10){  
        cout << "o número de parcelas que vc digitou não é valido";
        }
    cout 
    


}