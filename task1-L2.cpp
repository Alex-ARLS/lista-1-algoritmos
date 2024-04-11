/*Dados  três  valores  X,  Y  e  Z,  verifique  e  escreva  se  eles  podem  ser  os  comprimentos  dos  lados  de  um 
triângulo e, se forem, verificar e escrever se é  um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  •  Escaleno: tem os comprimentos dos três 

    triangulo;cada lado é menor que a soma dos outros dois lados.

    equilateros;tem os comprimentos dos três lados iguais.

    isósceles; tem os comprimentos de dois lados iguais e um lado diferente
    
    escalenos tem os comprimentos dos tres lados diferentes. 
*/
#include <iostream>
using namespace std;
int main (){
    int lado1, lado2, lado3;

    cout <<"qual valor dos lados? dos quais vc quer calcular?";
    cin >> lado1 >> lado2 >> lado3;
    if ((lado1 > (lado2 + lado3))||(lado2 > (lado1 + lado2))||(lado3 > (lado2 + lado1))){ //havia um erro na hora de usar o operador maior e menor que.
        cout<< "os dados dos quais vc digitou refere-se a um triangulo.";
    }else{
        if ((lado1 == lado2)&&(lado2 == lado3))
        {   
            cout<<"vc acaba de seletar o equilatero.";
            
        }else if((lado1 != lado2)&&(lado2 == lado3)){                                                                         //não coloca parametro se for else. if else sim, coloca
            cout<<"vc acaba de seletar o isosceles.";
        }else{
            cout <<"vc acaba de seletar o escaleno.";
        }
    }
    
    


    return 0;
}