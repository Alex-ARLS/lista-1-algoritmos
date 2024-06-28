/*Elabore  um  algoritmo  que  leia  um  n�mero  inteiro  qualquer  e  verifique  se  ele  �  quadrangular.  Se  for, 
mostrar os pr�ximos 10 quadrangulares depois dele. Se n�o for, informar. OBS: Os n�meros 
quadrangulares s�o 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ... */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num, raiz;
    bool isQuadrangular = false;
    cout << "informe o numero inteiro:\n\t";
    cin >> num;

    
    raiz = sqrt(num);

    if (raiz * raiz == num)
    {
        isQuadrangular = true;
    }
    if (isQuadrangular){
        cout << "e um numero quadrangular\n\t";
        cout <<"os 10 numeros quadrangulares depois dele sao:\n\t";
        for (int i = 1; i <= 11 ; i++){
            int proxQuadrangular = (raiz + i) * (raiz + i);
            cout <<proxQuadrangular <<endl;
            }
    }else{
        cout << num << " n�o � um n�mero quadrangular." << endl;
    }
}
