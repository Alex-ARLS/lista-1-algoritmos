/*Leia  um  número  inteiro  N  e  um  percentual  qualquer
e  escreva  qual  o  valor  do  percentual 
aplicado ao número.*/

#include <iostream>
float calcularPercent(int number, float percent) { //essa funcao foi criada com o intuito de simplicaficar o código a baixo, tornando-o mais fácil de realizar a leitura da funçao a baixo.

    float valorPercentual = number * (percent / 100);
    return valorPercentual;
    }    

using namespace std;
int main(){
    int number;
    float percent;
    
    cout <<"digite um numero que seja referente ao valor que vc deseja ter o percentual; ";
    cin >> number;
    cout << "digite o percentual a ser aplicado em (%): ";
    cin >> percent;

    float resultado = calcularPercent(number, percent);

    cout << "o valor de percentual é " << percent << "% aplicado ao numero insirido que foi" << number <<"é"<< resultado<< endl;

    return 0;

}