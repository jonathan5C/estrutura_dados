#include <iostream>
#include <vector>

using namespace std;

int larger_number(vector<int> list) {
  auto number = 0;
  auto size = list.size();

  number = list[0];
  for (auto i = 1; i < size; i++) { 
    if (number < list[i]) {
      number = list[i];
    }
  }
  return number;
}

int main() {
  auto list_number = vector<int> {10, 4, 25, 8, 150};
  cout << "The largest number is: " << larger_number(list_number);
}