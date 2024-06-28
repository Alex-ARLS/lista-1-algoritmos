    /*Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por 
    B sem usar o operador de resto (%).*/
    #include <iostream>
    #include <iomanip>

    using namespace std;
    int main (){
        int A, B, resto;

        cout << "informe o valor de A";
        cin >> A;
        cout << "informe o valor de B";
        cin >> B;

        

        if (B== 0){
            cout << "essa divisao por zero nao e perimitida";

        }else{
            resto = A;

            while (resto >=B){
                resto = resto - B;

            }

            cout << "o resto da divisao de " << A <<" por" << " e: " <<resto << endl;

        }

        return 0;
    }
