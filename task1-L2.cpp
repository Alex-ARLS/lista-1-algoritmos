/*Dados  três  valores  X,  Y  e  Z,  verifique  e  escreva  se  eles  podem  ser  os  comprimentos  dos  lados  de  um 
triângulo e, se forem, verificar e escrever se é  um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  •  Escaleno: tem os comprimentos dos três 

    triangulo;cada lado é menor que a soma dos outros dois lados.

    equilateros;tem os comprimentos dos três lados iguais.

    isósceles; tem os comprimentos de dois lados iguais e 
    
    escalenos tem os comprimentos dos tres lados diferentes. 
*/
#include <iostream>
using namespace std;
int main (){
    int lado1, lado2, lado3;

    cout << "qual valor do lado 1?";
    cin >> lado1;

    cout << "qual valor do lado 2?";
    cin >> lado2;
    
    cout << "qual valor do lado 3?";
    cin >> lado3;

    if ((lado1 <= lado2 + lado3)&&(lado2 <= lado1 + lado3)&&(lado3 <= lado1 + lado2)){
        cout <<"bom... a soma dos dois lados, e maior que um lado! por isso não  um triangulo."; //triangulo
    } else{
        cout <<"os valores que você digitou caracterizam um triangulo, parabens, amigo!";

    } if((lado1 == lado2)&&(lado2 == lado3)&&(lado3 == lado1)){
        cout << "parabens vc acaba de escrever dimensoes de um equilatero, eles possuem lados exatamente iguais.";

    } else if((lado1 == lado2)&&(lado2 == lado1)&&(lado3 != lado2)&&(lado1 != lado2)){
        cout <<"parabens vc acaba digitar dimensoes de um isosceles";

    } else {
        cout<<"parabens vc acaba de digitar as dimensoes de um escaleno";
    }

    return 0;
}