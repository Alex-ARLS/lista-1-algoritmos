/*A escola “APRENDER” faz o pagamento* de seus professores* por hora/aula.
 Faça um algoritmo que calcule 
e escreva o salário* de um professor, 
sabendo que o valor da hora/aula segue a tabela abaixo:  
 
Professor nível 1  R$ 12,00 por hora aula  
Professor nível 2  R$ 17,00 por hora aula  
Professor nível 3  R$ 25,00 por hora aula */


#include <iostream>

using namespace std;
int main(){
    int professorLevel;
    float horaAula;

    cout<<"qual o nivel do professor que vc deseja calcular?";
    cin>> professorLevel;

    switch (professorLevel)
    {
    case 1:
    horaAula = 12.00;
        cout <<"o nivel do qual vc inseriu e igual a:" << horaAula;
        break;
        case 2:
    horaAula = 17.00;
        cout <<"o nivel do qual vc inseriu e igual a:" << horaAula;
        break;
        case 3:
    horaAula = 25.00;
        cout <<"o nivel do qual vc inseriu e igual a:" << horaAula;
        break;
    
    default:
        break;
    }
}