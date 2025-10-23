// Soma de Elementos: Escreva uma função que calcule a soma de todos os números em um array.
// Entrada dos dados: [1, 2, 3, 4, 5] | Retorno esperado: 15

#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> list) {
  auto value = 0;
  auto size = list.size();

  for (auto i = 0; i < size; i++) {
    value += list[i];
  }

  return value;
}

int main() {
  auto list_num = vector<int>{1, 2, 3, 4, 5};
  cout << sum(list_num);
}