/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/
#include <iostream>
using namespace std;
int main (){
    int numero;
    char opcao;

    cout << "digite um numero inteiro; ";
    cin >> numero;
    cout << "digite 'a' para calcular a soma dos 10 antecessores ou 's' para os sucessores:";
    cin >> opcao;

    int soma = 0;

    if ((opcao == 'a')|| (opcao == 'A')){
        //isso vai ser a soma dos 10 antecessores
        for (int i = 1; i <= 10; ++i){
            soma += (numero - i);
        }
        cout << "A soma dos 10 antecessores de " << numero << " é :" << soma;
    } else if (( opcao == 's')|| (opcao =='S')){
        for (int i = 1; i<=10; ++i) {
            soma += (numero + i );
        }
    cout << "A soma dos 10 sucessores de " << numero << " é: " << soma << std::endl;

    }else {
        cout << "opcao invalida!";
    }
    return 0;
}