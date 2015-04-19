#include "ColaParint.hh"

int main() {
  cout << "Escriu la cua (-1 per parar) :" << endl;
  queue<parint> cua;
  llegir_cua_parint(cua);
  cout << "Quin numero volem buscar?" << endl;
  int n;
  cin >> n;
  cerca_cua_parint(cua, n);
  cout << "Aquesta es la cua:" << endl;
  escriure_cua_parint(cua);
}