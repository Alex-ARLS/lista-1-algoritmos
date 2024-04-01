/*Leia um número inteiro N e um percentual qualquer e escreva 
qual o valor do percentual aplicado ao número. 
*/
#include <iostream>
using namespace std;
int main (){
    int n, nFinal;
    float perc, perc;

    cout<< "digite um numero inteiro e um percentual a ser aplicado;\n";
    cin << n << perc;

    //aqui vai haver o processamento das entradas
    nFinal = n + (n*(perc/100)); //o cálculo que é o processar dos dados
    cout << "o percentual" << perc << " aplicado a "<< n <<"e" << nFinal;
    cout << "fim do programa";
    return 0;
}