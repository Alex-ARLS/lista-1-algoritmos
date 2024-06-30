/* Elabore um algoritmo que apresente um menu contendo as op��es 1-Tri�ngulo, 2-Quadrado, 
3Ret�ngulo, 4-Trap�zio, 5-C�rculo, 6-Sair. Em seguida, de acordo com a op��o escolhida pelo usu�rio, o 
algoritmo deve solicitar as informa��es necess�rias para c�lculo da �rea, efetuar o c�lculo e escrever o 
resultado. O algoritmo s� dever� finalizar quando o usu�rio escolher a op��o 6-Sair.*/


#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int opcao = 0;
    while (opcao != 6){
        cout << "Menu de op��es:" << endl;
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
            cout << "A �rea do quadrado �: " << area << endl;
        }else if (opcao == 3){
            double largura, altura;
            cout << "Digite a largura do ret�ngulo: ";
            cin >> largura;
            cout << "Digite a altura do ret�ngulo: ";
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
            cout << "A area do trap�zio �: " << area << endl;
        }else if (opcao ==5){
            double raio;
            cout << "Digite o raio do c�rculo: ";
            cin >> raio;
            float pi = 3.14;
            double area = pi * raio * raio;
            cout << "A area do c�rculo �: " << area << endl;
        }else if (opcao == 6){
            cout << "saindo..." << endl;

        }else {
            cout <<"opcao invalida, tente novamente";

        }
        cout << endl;

    }


    return 0;
}
