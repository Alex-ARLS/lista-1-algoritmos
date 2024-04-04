#include <iostream>
using namespace std;
int main(){
    double imposto, taxa_distribuidor, porcentagem;
    float valor_carro, valor_total;

    cout<< "qual o custo de producao esse carro teve?\n";
    cin >> valor_carro;
    cout << "qual a porcentagem de impostos aplicada sobre esse veiculo?\n";
    cin >> imposto;
    cout<< "qual a taxa do distribuidor aplicada para esse veiculo?\n";
    cin >> taxa_distribuidor;

    cout <<"uau, voce acaba de produzir esse carro no melhor pais para ser produzido, parabens\n voce acaba de receber uma taxa de 28 % do distribuidor e de 45 % do estado, apenas em impostos, voce e muito inteligente!";

    porcentagem = imposto * taxa_distribuidor/ 100;
    
    valor_total = porcentagem * valor_carro;

    cout <<"como havia avisado anteriormente, vc e uma maquina produziu seu carro no lugar certo o valor total do carro é; "<< valor_total;
    return 0;
    
}
