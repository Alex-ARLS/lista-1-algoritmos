#include <iostream>
using namespace std;

int main() {
    int codigo, idade, codigoMaisVelho, idadeMaisNova;
    int cont = 1; // Vari�vel para controlar as itera��es

    // Inicialize as vari�veis de idade e c�digo
    idadeMaisNova = 999; // Inicialize com um valor alto para garantir que a primeira idade ser� menor
    codigoMaisVelho = -1; // Inicialize com um valor negativo para garantir que a primeira idade ser� maior

    do {
        cout << "Digite o c�digo da pessoa " << cont << ": ";
        cin >> codigo;

        cout << "Digite a idade da pessoa " << cont << ": ";
        cin >> idade;

        // Verifica se a idade � a mais nova at� agora
        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
            codigoMaisVelho = codigo;
        }

        // Verifica se a idade � a mais velha at� agora
        if (idade > idadeMaisNova) {
            idadeMaisNova = idade;
            codigoMaisVelho = codigo;
        }

        cont++; // Incrementa o contador
    } while (cont <= 5);

    // Exibe os resultados
    cout << "\nA pessoa mais velha tem o c�digo: " << codigoMaisVelho << " e idade: " << idadeMaisNova << " anos." << endl;
    cout << "A pessoa mais nova tem a idade: " << idadeMaisNova << " anos." << endl;

    return 0;
}

