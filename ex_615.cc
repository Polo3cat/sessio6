#include "Mostrador.hh"

int main()
{
  int a, cat, quantitat, n;
  string titol;
  cin >> n;
  Mostrador mostrador(n);
  while (cin >> a and a != -4) {
    switch(a) {
      case -1:
	cin >> titol >> cat;
	mostrador.afegir_llibre(titol,cat);
	break;
      case -2:
	cin >> quantitat >> cat;
	mostrador.retirar_llibres(cat, quantitat);
	break;
      case -3:
	cin >> cat;
	mostrador.escriure_pila(cat);
	break;
      default:
	cout << "Unexpected number" << endl;
    }
  }
}