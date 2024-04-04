#include <iostream>
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do  distribuidor  seja  de  28%  e  os  impostos  de  45%,  escreva  um  algoritmo  que  leia  o  custo  de 
fábrica de um carro e escreva o custo ao consumidor*/
using namespace std;
int main(){
    double imposto, taxa_distribuidor;
    float valor_carro, valor_total;

    cout<< "qual o custo de producao esse carro teve?\n";
    cin >> valor_carro;
    cout << "qual a porcentagem de impostos aplicada sobre esse veiculoem decimal?\n";
    cin >> imposto;
    cout<< "qual a taxa do distribuidor aplicada para esse veiculo em decimal?\n";
    cin >> taxa_distribuidor;

    cout <<"uau, voce acaba de produzir esse carro no melhor pais para ser produzido, parabens\n voce acaba de receber uma taxa de 28 % do distribuidor e de 45 % do estado, apenas em impostos, voce e muito inteligente!";
    valor_total = valor_carro + (valor_carro * taxa_distribuidor / 100 ) + (valor_carro * imposto / 100) ;

    cout <<"como havia avisado anteriormente, vc e uma maquina produziu seu carro no lugar certo o valor total do carro é; "<< valor_total;
    return 0;
    
}

