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
    float salario;

    cout<<"digite o codigo do cargo;";
    cin >> codigoCargo;

    cout <<"qual o salario atual?";
    cin >>salario;

    switch (codigoCargo)
    {
    case 101:

        cout <<""







        break;

    case 102:

        break;
    case 103:

        break;      
    default:
        break;
    }
    
    
}