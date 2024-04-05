/*Leia  uma  temperatura  em  graus  Celsius  e  apresente-a  convertida  em  graus  Fahrenheit.  A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius. basta multiplicar por 1,8 e somar 32 para ter o valor Fahrenheit*/
#include <iostream>
using namespace std;
int main() {
    double celsius, fahren;
    cout << "qual a temperatura neste exato momento para calcularmos? insira em Graus Celsius \n";
    cin >> celsius;

    fahren = (celsius * 1.8) + 32;

    cout << "essa temperatura convertida e igual a; \n " << fixed << fahren;

    cout << "\n obrigado!!!\n";



    return 0;
}