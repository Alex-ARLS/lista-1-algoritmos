/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal:   
• Masculino = (72,7 x altura) - 58   case 1
• Feminino = (62,1 x altura) - 44,7 case 2 */
#include <iostream>
using namespace std;

int main() {
    double altura, pesoIdeal = 0.0;
    char genero;

    cout << "Digite a altura em metros: ";
    cin >> altura;

    cout << "Digite o gênero (m/f): ";
    cin >> genero;

    if (genero == 'm' || genero == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (genero == 'f' || genero == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        cout << "Gênero inválido. Use 'm' para masculino ou 'f' para feminino." << endl;
        return 1;  // Encerra o programa com erro
    }

    if (pesoIdeal > 0) {
        cout << "O peso ideal é: " << pesoIdeal << " kg" << endl;
    }

    return 0;
}
