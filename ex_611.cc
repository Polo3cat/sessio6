#include "PilaIOparint.hh"

int main()
{
  cout << "La marca es el 0, pots començar a escriure les parelles:" << endl;
  stack<parint> stackpi;
  llegir_stack_parint(stackpi, 0);
  cout << "El stack es aixi:" << endl;
  escriure_stack_parint(stackpi);
}