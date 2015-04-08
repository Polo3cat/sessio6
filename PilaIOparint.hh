#ifndef _PILAIOPARINT_
#define _PILAIOPARINT_

#include "parint.hh"
#include <stack>
#include <iostream>

void llegir_stack_parint (stack<parint>& s, int marca)
//PRE: s es del tipus parint, no té per què estat buit
//POST: stack s està ple dels elements que han arribat al canal estandar d'entrada
//fins a la marca
{
  parint aux;
  cin >> aux.primer;
  while (aux.primer != marca) {
    if (cin >> aux.segon and aux.segon != marca) {
      s.push(aux);
      cin >> aux.primer;
    }
    else {
      aux.primer = marca;
    }
  }
}

void escriure_stack_parint (stack<parint> s)
//PRE: true
//POST: s'ha impres pel canal estàndard de sortida l'stack s
{
  parint aux;
  while (not s.empty()) {
    aux = s.top();
    s.pop();
    cout << aux.primer << " " << aux.segon << endl;
  }
}

void busca_parella (stack<parint> s, int candidat)
{
  bool found = false;
  parint aux;
  while (not found and not s.empty()) {
    aux = s.top();
    if (aux.primer == candidat) {
      cout << "El compañero del " << candidat << " en la pila es el " << aux.segon << endl;
      found = true;
    }
    else if (aux.segon == candidat) {
      cout << "El compañero del " << candidat << " en la pila es el " << aux.primer << endl;
      found = true;
    }
    s.pop();
  }
}

#endif