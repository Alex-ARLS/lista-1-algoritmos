#include <iostream>
/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa 
apenas em dias.
Obs: Considere cada mês com 30 dias.*/

using namespace std;
int main(){
    int idade, meses, dias, dias_Totais;


    cout << "ola, amigo. qual a sua idade em anos? /n";
    cin >> idade;

    cout <<"agora me informe quantos meses? ";
    cin >> meses;

    cout << "e agora quantos dias ? ";
    cin >> dias;

    dias_Totais = idade * 365 * meses + dias;
    cout << "a sua idade exata em dias é de: " << dias_Totais;
    return 0; 
}