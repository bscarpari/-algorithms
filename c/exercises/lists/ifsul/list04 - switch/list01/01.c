#include <iostream>
#include <locale>

using namespace std;

/*
  Faca um algoritmo que tendo como dados de entrada o preco de um produto
  e um código de origem, emita o preco junto com a sua procedencia. Caso
  o código não seja nenhum dos especificados, o produto deve ser encarado
  como importado.

  1 - sul
  2 - norte
  3 - leste
  4 - oeste
  5 ou 6 - nordeste
  7, 8 ou 9 - sudeste
  10 até 20 - centro-oeste
  25 até 50 – nordeste
*/
int main()
{
  int codigo;
  float preco;

  cout << "Digite o codigo do produto: ";
  cin >> codigo;

  cout << "Digite o preco do produto: ";
  cin >> preco;

  if (codigo == 1)
    return cout << "Preco: " << preco << " Procedencia: Sul" << endl, 0;

  if (codigo == 2)
    return cout << "Preco: " << preco << " Procedencia: Norte" << endl, 0;

  if (codigo == 3)
    return cout << "Preco: " << preco << " Procedencia: Leste" << endl, 0;

  if (codigo == 4)
    return cout << "Preco: " << preco << " Procedencia: Oeste" << endl, 0;

  if (codigo == 5 || codigo == 6)
    return cout << "Preco: " << preco << " Procedencia: Nordeste" << endl, 0;

  if (codigo == 7 || codigo == 8 || codigo == 9)
    return cout << "Preco: " << preco << " Procedencia: Sudeste" << endl, 0;

  if (codigo >= 10 && codigo <= 20)
    return cout << "Preco: " << preco << " Procedencia: Centro-Oeste" << endl, 0;

  if (codigo >= 25 && codigo <= 50)
    return cout << "Preco: " << preco << " Procedencia: Nordeste" << endl, 0;

  return cout << "Preco: " << preco << " Procedencia: Importado" << endl, 0;
}
