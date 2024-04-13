#include <iostream>
using namespace std;

int main() {
    int codigo, idade, codigoMaisVelho, idadeMaisNova;
    int cont = 1; // Variável para controlar as iterações

    // Inicialize as variáveis de idade e código
    idadeMaisNova = 999; // Inicialize com um valor alto para garantir que a primeira idade será menor
    codigoMaisVelho = -1; // Inicialize com um valor negativo para garantir que a primeira idade será maior

    do {
        cout << "Digite o código da pessoa " << cont << ": ";
        cin >> codigo;

        cout << "Digite a idade da pessoa " << cont << ": ";
        cin >> idade;

        // Verifica se a idade é a mais nova até agora
        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
            codigoMaisVelho = codigo;
        }

        // Verifica se a idade é a mais velha até agora
        if (idade > idadeMaisNova) {
            idadeMaisNova = idade;
            codigoMaisVelho = codigo;
        }

        cont++; // Incrementa o contador
    } while (cont <= 5);

    // Exibe os resultados
    cout << "\nA pessoa mais velha tem o código: " << codigoMaisVelho << " e idade: " << idadeMaisNova << " anos." << endl;
    cout << "A pessoa mais nova tem a idade: " << idadeMaisNova << " anos." << endl;

    return 0;
}

