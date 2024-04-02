/*Leia  um  número  inteiro  N  e  um  percentual  qualquer
e  escreva  qual  o  valor  do  percentual 
aplicado ao número.*/

#include <iostream>

using namespace std;
int main(){
    int number;
    float percent;
    
    cout <<"digite um numero que seja referente ao valor que vc deseja ter o percentual; ";
    cin >> number;
    cout << "digite o percentual a ser aplicado em (%): ";
    cin >> percent;

    float resultado = calcularPercent(number, percent);

    cout << "o valor de percentual é " << percent << "% aplicado ao numero insirido que foi" << number; <<"é"<< resultado<< endl;

}