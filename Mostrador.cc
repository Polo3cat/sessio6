#include "Mostrador.hh"

Mostrador::Mostrador(int n)
{
  vector<stack<llibre> > mostrador(n);
}

Mostrador::~Mostrador(){}

void Mostrador::afegir_llibre(string nom, int cat)
{
  llibre aux;
  aux.titol = nom;
  aux.categoria = cat;
  mostrador[cat - 1].push(aux);
}

void Mostrador::retirar_llibres(int cat, int quantitat)
{
  if (mostrador[cat - 1].size() >= quantitat) {
    for (int i = 0; i < quantitat; ++i) {
      mostrador[cat-1].pop();
    }
  }
  else {
    cout << "No hi ha suficients llibres" << endl;
  }
}

bool Mostrador::es_buida(int cat)
{
  return mostrador[cat-1].empty();
}

void Mostrador::escriure_pila(int cat)
{
  stack<llibre> aux;
  aux = mostrador[cat - 1];
  while (not aux.empty()) {
    cout << aux.top().titol << endl;
  }
}