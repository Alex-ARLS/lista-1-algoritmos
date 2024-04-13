/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre  o  preço  do  carro.  Elabore  um  algoritmo  que  leia  o  ano  e  o  preço  do  carro,  calcule  e  escreva  o 
imposto a ser pago*/
#include <iostream>
using namespace std;
int main() {

    int anoFab;
    float valorCar, imposto;

    cout<< "qual o ano de fabricacao do carro? \n";
    cin >> anoFab;
    cout<<"qual o valor do carro? \n";
    cin >> valorCar;

    if (anoFab <= 1990)
    {
        imposto = (valorCar * 0.01);
        valorCar = imposto + valorCar;
        
        cout << "o valor do carro com impostos é igual a :" << valorCar << " R$ \n isso ocorre devido o ano do veiculo.";

    }else{
        imposto = (valorCar * 0.015);
        valorCar = imposto + valorCar;
        
        cout <<"o valor do carro é igual a : " << valorCar << "R$\n esta taxa eh devido seu carro ser fabricado depois dos anos 90.";
    }

    
    return 0;

}