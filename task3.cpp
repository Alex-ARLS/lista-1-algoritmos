#include <iostream>
/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros.*/

using namespace std;
int main (){
    float valorCompra, valorDaParcela;
    int prestacoes;

    cout <<"ola seja bem vindo as lojas sua melhor compra \n";
    cout <<"qual valor do produto que vc deseja?";
    cin >> valorCompra;

    cout << "em quantas prestacoes vc deseja realizar esta compra?\n";
    cin >> prestacoes;

    valorDaParcela = valorCompra / prestacoes;

    cout << "o valor da parcela ficou no valor de: " << valorDaParcela << "reais";
    
    return 0;

}