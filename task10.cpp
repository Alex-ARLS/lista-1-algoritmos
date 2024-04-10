/*Leia  dois  valores  inteiros  para  as  variáveis  A  e  B  e  efetue  as  operações  de  adição,  subtração, 
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia 
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção 
(E) e disjunção (OU), apresentando ao final os resultados obtidos.*/


#include <iostream>

using namespace std;
int main(){
    int A, B;
    bool C, D;

    cout << "qual valor vc deseja operar? (A)";
    cin >> A;
    cout << "qual valor vc deseja operar? (B)";
    cin >> B;

    int somar = A + B;
    int sub = A - B;
    int mult = A * B;
    int div = A / B;

    cout << "os valores de A e B já feitos as operacoes sao; \n " << somar << "\n soma " << sub << "\n subtraindo " << mult << " \n multiplicando " << div << "\n dividindo ";
}