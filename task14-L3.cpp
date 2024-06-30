/* Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 
3Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.*/


#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int opcao = 0;
    while (opcao != 6){
        cout << "Menu de opções:" << endl;
        cout << "1 - Triangulo" << endl;
        cout << "2 - Quadrado" << endl;
        cout << "3 - Retangulo" << endl;
        cout << "4 - Trapezio" << endl;
        cout << "5 - Circulo" << endl;
        cout << "6 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1){
            double base, altura;
            cout <<" digite a base do triangulo";
            cin >> base;
            cout <<"digite a altura do triangulo";
        }else if (opcao ==2){
            double lado;
            cout << "Digite o lado do quadrado: ";
            cin >> lado;
            double area = lado * lado;
            cout << "A área do quadrado é: " << area << endl;
        }else if (opcao == 3){
            double largura, altura;
            cout << "Digite a largura do retângulo: ";
            cin >> largura;
            cout << "Digite a altura do retângulo: ";
            cin >> altura;
            double area = largura * altura;
        }else if(opcao == 4){
            double baseMaior, baseMenor, altura;
            cout << "Digite a base maior do trapezio: ";
            cin >> baseMaior;
            cout << "Digite a base menor do trapezio: ";
            cin >> baseMenor;
            cout << "Digite a altura do trapezio: ";
            cin >> altura;
            double area = ((baseMaior + baseMenor) * altura) / 2;
            cout << "A area do trapézio é: " << area << endl;
        }else if (opcao ==5){
            double raio;
            cout << "Digite o raio do círculo: ";
            cin >> raio;
            float pi = 3.14;
            double area = pi * raio * raio;
            cout << "A area do círculo é: " << area << endl;
        }else if (opcao == 6){
            cout << "saindo..." << endl;

        }else {
            cout <<"opcao invalida, tente novamente";

        }
        cout << endl;

    }


    return 0;
}