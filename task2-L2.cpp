#include <iostream>
using namespace std;
int main(){
  int numero;
  bool par;
  bool impar;

  cout<< "digite o valor que vc quer processar como par ou impar!\n";
  cin >> numero;

  if (numero % 2 == 0)
  {
    par = true;
    cout <<"o valor eh par.\n";
  }else{
    impar=true;
    cout <<"o valor eh impar.\n";
  }
  if (numero > 100){
    cout <<"o numero eh maior que 100";
  }else{
    cout << "o numero eh menor que 100";
  }
  
  



}