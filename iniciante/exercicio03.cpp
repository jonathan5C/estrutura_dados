#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverse_string(string data) {
  string name_reverse;
  stack<char> stack_latter;

  for (char latter : data) {
    stack_latter.push(latter);
  }

  while (!stack_latter.empty())
  {
    name_reverse += stack_latter.top();
    stack_latter.pop();
  }
  
  return name_reverse;
}

int main() {
  string name = "hello";
  cout << reverse_string(name);
}