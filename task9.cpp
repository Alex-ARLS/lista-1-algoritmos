/*Leia  dois  valores  inteiros  nas  variáveis  Val1  e  Val2,  troque  os  seus  conteúdos  e  escreva  o 
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois 
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10. */
#include <iostream>

using namespace std;
int main (){
    int var1, var2;

    cout<<"qual o valor da variavel 1?";
    cin >> var1;

    cout << "qual valor da variavel 2?";
    cin >> var2;

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    //ou

    /*temp = Val1; add variavel temporaria, ams vai ocupar mais espaço na memoria
    Val1 = Val2;
    Val2 = temp;*/
    cout << "\n apos a troca de valores var1 vai ficar: "<<var1 << " e var2 vai ficar: " << var2;
    return 0;

}

