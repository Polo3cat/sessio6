#include "PilaIOparint.hh"

int main()
{
  cout << "La marca es el 0, pots començar a escriure les parelles:" << endl;
  stack<parint> stackpi;
  llegir_stack_parint(stackpi, 0);
  cout << "Quina parella vols?" << endl;
  int a;
  cin >> a;
  busca_parella(stackpi, a);
}