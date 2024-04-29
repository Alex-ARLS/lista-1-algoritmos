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

    float totalConta = 0.0;
    cout << "insira o codigo referente ao seu pedido, conforme o Cardapio a baixo!";
cout <<"------------ Sanduíche\n   ";
cout <<"------------ Codigo  Descricao  Preço Unitario\n  ";
cout <<"------------ 100  Cachorro quente  1,10  \n";
cout <<"------------ 101  Bauru simples    1,30  \n";
cout <<"------------ 102  Bauru com ovo    1,50  \n";
cout <<"------------ 103  Hamburger        1,10  \n";
cout <<"------------ 104  Cheesburger      1,30  \n";
cout <<"------------ Bebida   \n";
cout <<"------------ Código  Descricao  Preço Unitario\n  ";
cout <<"------------ 105  Refrigerante  1,00  \n";
cout <<"------------ 106  Suco          2,00  \n";
cout <<"------------ 107  Nescau        1,50  \n";
    cin >> codBebida >> codSanduiche;

       switch (codSanduiche)
            {
            case 100:
                cout <<"cachorro quente adicionado.";
                cin >> qtdSanduiche;
                totalConta += qtdSanduiche  * 1.10;
                break;
            case 101:
                cout <<"bauro simples adicionado";
                totalConta += qtdSanduiche * 1.50;
                break;
            case 102:
                cout <<"bauru com ovo adicionado.";   
                totalConta += qtdSanduiche * 1.80;             
                break;
            case 103:
                cout <<"hamburguer adicionado.";   
                totalConta += qtdSanduiche * 2.50;
                break;
            case 104:                
                cout <<"cheesburguer adicionado.";
                totalConta += qtdSanduiche * 2.80;
                
                break;    
            case 105:
                totalConta += qtdBebida * 2;
                cout<<"vc adicionou refrigerante";
                break;
            case 106:
                totalConta += qtdBebida * 2.20;
                cout<<"vc adicionou suco";
                break;
            case 107:
                totalConta += qtdBebida * 1.50;
                cout<<"vc adicionou nescau";
                break;

            default:
                cout << "nenhum item selecionado conforme o codigo de sanduiche informado";
                break;
    }
    
}