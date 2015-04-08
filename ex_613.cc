#include "PilaIOparint.hh"

int main()
{
  cout << "Escriu la pila, acaba amb 0" << endl;
  stack<parint> s;
  llegir_stack_parint(s, 0);
  cout << "Indica el valor que vols sumar al segon parell" << endl;
  int k;
  cin >> k;
  stack<parint> t = afegeix_k_sobre_copia(s, k);
  escriure_stack_parint(t);
}