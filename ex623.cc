#include "ColaParint.hh"

int main()
{
  cout << "Afegeix cua:" << endl;
  queue<parint> cua;
  llegir_cua_parint(cua);
  escriure_cua_parint(cua);
  cout << "Afegeix k" << endl;
  int k;
  cin >> k;
  afegeix_k_ref(cua, k);
  escriure_cua_parint(cua);
}