#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
int main (){
 //Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. Supor
 //que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e
 //escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. 
 //(se a > b + c não formam triângulo algum, se a é o maior


 //Variaveis
 int a,b,c; 
 bool problema = false;

double sp,area;

 //Coletar Dados
 cout << "Digite o valor de A: ";
 cin >> a;
 cout << "Digite o valor de B: ";
 cin >> b; 
 cout << "Digite o valor de C ";
 cin >> c;
    
//Calculo
    if (a> b + c)
    {
        problema = true;
    }
 else if (b > a + c)
   {
       problema = true;
   }
   else if (c > a + b)
   {
       problema = true;
   }
  else 
  {

      //sp = (a+b+c)/2
      //area = raizq(sp.(sp-a).(sp-b).(sp-c))

      sp = (a + b + c )/2;
      area = sqrt(sp * (sp - a) * (sp-b) * (sp-c));
     
     cout << "Area: " << area;

  }
  if (problema)
  {
      cout << "Houve um problema: nao e possivel formar um triangulo, pois um dos lados e maior que a soma dos demais\n\n";
		cout << "(" << a << "," << b << "," << c << ")";
  }
 system ("pause");
 
}