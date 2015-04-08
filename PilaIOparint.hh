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
//PRE: true
//POST: s'escriu al canal estandard de sortida el candidat i la seva parella, si no en té no es fa res
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

stack<parint> afegeix_k_sobre_copia (stack<parint>& a, int k)
//PRE: a no es un stack buit
//POST: retorna un stack igual al primer més k a la segona parella dels parint
{
  stack<parint> s = a;
  stack<parint> aux;
  parint paraux;
  while (not s.empty()) {
    paraux = s.top;
    paraux.segon += k;
    aux.push(paraux);
  }
  while (not aux.empty()) {
    paraux = aux.top();
    s.push(paraux);
  }
  return s;
}

#endif