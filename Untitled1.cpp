/*O número 3025 possui a seguinte característica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e 
“negativo” se não tiver. */
#include <iostream>
using namespace std;
int main (){
    int N, number;
    int firstPart, secondPart, sum;
    cout <<"informe a quantidade de numeros que voce quer verifcar:";
    cin >> N;
    for (int i=0; i < N; i++){
        cout <<"informe um numero de 4 digitos:";
        cin >> number;

        firstPart = number / 100;
        secondPart = number % 100;
        sum = firstPart + secondPart;

        if (sum *sum == number){
            cout <<"positivo"<< endl;

        }else {
            cout << "negativo" << endl;
        }

    }

    return 0;
    
}


