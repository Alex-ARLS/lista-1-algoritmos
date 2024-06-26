#include <iostream>
/*Calcule e escreva a quantidade de dinheiro
 gasta por um fumante a partir da leitura das
informações número de anos que ele fuma,
 quantidade] de cigarros fumados por dia e preço de
uma carteira. */

using namespace std;
int main (){
    int tempoFumando, cigarrosPorDia, preco_carteira;
    cout << "ha quanto tempo voce fuma?";
    cin >> tempoFumando;
    
    cout << "quantos cigarros por dia vc fuma?";
    cin >> cigarrosPorDia;

    cout << "qual o preco da carteira?";
    cin >> preco_carteira; 

    int totalCigarros = tempoFumando * 365 * cigarrosPorDia;    //aqui teremos apenas o numero total de cigarros, sem termos os valores. precisamos encontrar isso com o valor da carteira
    int totalCarteiras = totalCigarros / 20; // aqui vamos pegar o valor total de cigarros e dividir por 20, aqui já podemos ter uma ideia de quantas cartelas de cigarros foram consumidas

    int restoCigarros = totalCigarros % 20;

    if (restoCigarros > 0){ //aqui vamos criar um IF caso o resto seja maior que 0, acrescentar o valor de 1 carteira.
        totalCarteiras++; // esse ++ incrementa 
    }

        int valorTotal = totalCarteiras * preco_carteira;

        cout << "O fumante gastará um total de R$" << valorTotal << " em cigarros ao longo de " << tempoFumando << " anos." << endl;

    return 0;


}