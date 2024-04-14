/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule  o  novo  salário.  Se  o  cargo  do  funcionário  não  estiver  na  tabela,  ele  deverá  receber  40%  de 
aumento. Mostre o salário antigo, o novo salário e a diferença.   
 
CÓDIGO  CARGO  PERCENTUAL  
101  Gerente     10%  
102  Engenheiro  20%  
103  Técnico     30% 

*/

#include <iostream>
using namespace std;
int main (){
    int codigoCargo;
    bool cargoMais1;
    float salario;

    cout<<"digite o codigo do cargo;";
    cin >> codigoCargo;

    cout <<"qual o salario atual?";
    cin >>salario;

    switch (codigoCargo)
    {
    case 101:
        salario = (salario * 0.10) + salario;
        cout << "o seu salario de gerente recebeu acrescimo de 10%\n" << salario;
        break;

    case 102:
    salario = (salario * 0.20) + salario;
        cout << "o seu salario de engenheiro recebeu acrescimo de 10%\n" << salario;

        break;
    case 103:
    salario = (salario * 0.30) + salario;
        cout << "o seu salario de tecnico recebeu acrescimo de 10%\n" << salario;

        break;      
    default:
        cout<< "vc digitou um codigo de cargo que ainda nao foi cadastrado, deseja cadastrar?\n";
        cin>> cargoMais1;
        break;
    }
}