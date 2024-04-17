/*Elabore um programa em C++ que implemente as responsabilidades de uma empresa que entrega botijões de gás 24 horas da seguinte forma:
a)	O usuário seleciona no menu a opção "1 - Fazer pedido" e o sistema solicita a hora da compra e o telefone de cadastro
 (para verificar o endereço aonde o pedido deverá ser entregue). 

b)	O sistema informa os dados ao usuário e solicita que ele os confirme ou altere, se for o caso. Em caso de alteração, 
o sistema pede novamente a hora da compra e o telefone de cadastro e os altera. Em caso de confirmação, o sistema solicita 
ao usuário que digite a quantidade de botijões que deseja. 

c)	O sistema calcula automaticamente o total da compra (o botijão custa R$ 120,00 e, a cada dois botijões comprados,
 o terceiro sai com 40% de desconto) e a hora de entrega para 6 horas corridas após a hora da compra (verificar mudança de dia)
  e informa estes dados. 

d)	O sistema solicita o número do cartão de crédito como forma de pagamento e o armazena. Em seguida marca como "false" 
o status “pedido entregue” e exibe o código do pedido (número sequencial gerado automaticamente). A partir desse momento 
a opção do menu “1 - Fazer Pedido”, se acessada, deverá informar que “o pedido está em andamento e precisa ser entregue 
para que outro pedido possa ser realizado”.

e)	Quando o pedido for entregue, o atendente seleciona a opção do menu “2 - Confirmar entrega” que verifica se o código 
do pedido confere e, caso seja o mesmo, altera o status “pedido entregue” para “true”. Se o código não conferir, o sistema 
informa “código incorreto” e solicita novamente. 

f)	A qualquer momento o usuário pode selecionar no menu as opções “3 - Ver status do pedido”, na qual o sistema deverá 
informar “o pedido está em andamento” caso não tenha sido entregue ou “O pedido já foi entregue” caso tenha sido entregue, 
e “4 - Cancelar Pedido”, que altera o status “pedido entregue” para “false” e, a partir desse momento, permite que todo 
o processo de um novo pedido seja reiniciado se a opção do menu “1 - Fazer Pedido” for acessada.

g)	O sistema deverá encerrar quando a opção “5-Sair” for acessada.*/

#include <iostream>
using namespace std;
int main(){

}
