/*Leia o tempo de duração de um evento expresso em segundos
converta-o e mostre-o expresso 
em horas, minutos e segundos.*/
#include <iostream>
using namespace std;

int main(){
    int segundos, horas, minutos, segundos_restantes;

cout<< "digite o tempode duraçao do evento";
cin >> segundos;

horas = segundos / 3600;
minutos = (segundos % 3600) / 60;
segundos_restantes = (segundos % 3600) % 60;

cout << "tempo"<< horas << "horas,"<< minutos << "minutos"<< segundos_restantes<<"segundos"<< endl;

return 0;
}