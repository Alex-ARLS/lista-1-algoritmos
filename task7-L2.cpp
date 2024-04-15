/*O cardápio de uma lanchonete é o seguinte:   
  
Sanduíche   
Código  Descrição  Preço Unitário  
100  Cachorro quente  1,10  
101  Baurú simples    1,30  
102  Baurú com ovo    1,50  
103  Hamburger        1,10  
104  Cheesburger      1,30  
Bebida   
Código  Descrição  Preço Unitário  
105  Refrigerante  1,00  
106  Suco          2,00  
107  Nescau        1,50  
  
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche.*/

#include <iostream>
using namespace std;
int main (){
    int codSanduiche, codBebida, qtdBebida, qtdSanduiche;

    float totalConta;

    do
    {   
            switch (codSanduiche)
            {
            case 100:
                cout <<"cachorro quente adicionado.";
                cin >> qtdSanduiche;
                totalConta += qtdSanduiche;
                break;
                            case 101:
                cout <<"bauro simples adicionado";
                totalConta += qtdSanduiche;
                break;
                            case 102:
                cout <<"cachorro quente adicionado.";   
                totalConta += qtdSanduiche;             
                break;
                            case 103:
                cout <<"cachorro quente adicionado.";   
                totalConta += qtdSanduiche;             
                break;
                            case 104:                
                cout <<"cachorro quente adicionado.";
                totalConta += qtdSanduiche;
                
                break;    
            
            default:
                cout << "nenhum item selecionado conforme o codigo de sanduiche informado";
                break;
            }

            switch (codBebida)
            {
            case 105:
                totalConta += qtdBebida;
                cout<<"qu"
                break;
            
            default:
                break;
            }
        

    }
    
}