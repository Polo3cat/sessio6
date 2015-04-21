#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void llegir_cua(queue<int>& cua)
{
  int a;
  while (cin >> a and a != -1) {
    cua.push(a);
  }
}

void escriure_cua(queue<int> cua)
{
  while(not cua.empty()) {
    cout << cua.front() << endl;
    cua.pop();
  }
}

void escriure_pila(stack<int> pila)
{
  while (not pila.empty()) {
    cout << pila.top() << endl;
    pila.pop();
  }
}

stack<int> convertir(queue<int> & cua)
{
  stack<int> aux_stack0, aux_stack1;
  while (not cua.empty()) {
    aux_stack0.push(cua.front());
    cua.pop();
  }
  while (not aux_stack0.empty()) {
    aux_stack1.push(aux_stack0.top());
    aux_stack0.pop();
  }
  return aux_stack1;
}


int main()
{
  queue<int> a;
  llegir_cua(a);
  stack<int> pila_convertida = convertir(a);
  escriure_pila(pila_convertida);
}