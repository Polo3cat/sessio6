#ifndef _COLAPARINT_
#define _COLAPARINT_

#include "parint.hh"
#include <iostream>
#include <queue>


//Operacions de lectura i escriura de cues de parelles d'enters

void llegir_cua_parint(queue<parint>& cua)
{
  parint aux;
  while (cin >> aux.primer and aux.primer != -1 and cin >> aux.segon and aux.segon != -1) {
    cua.push(aux);
  }
}

void escriure_cua_parint(queue<parint> cua)
{
  parint aux;
  while (not cua.empty()) {
    aux = cua.front();
    cout << aux.primer << " " << aux.segon << endl;
    cua.pop();
  }
}

//Operacions de cerca

//PRE: True (dóna igual si la cua és buida o conté l'element)
//POST: Escriu la parella on el primer element es el culpable; retorna true si la busqueda és satisfactoria
bool cerca_cua_parint(queue<parint> cua, int culpable)
{
  bool trobat = false;
  parint aux;
  while (not cua.empty() and not trobat) {
    if (cua.front().primer == culpable) {
      trobat = true;
      cout << cua.front().primer << " " << cua.front().segon << endl;
    }
    cua.pop();
  }
  return trobat;
}

//Operacions de modificacio

//PRE:cua es una queue<parint>
//POST:els segons elements de cada parella de la cua han estat incrementats en k
void afegeix_k_ref(queue<parint>& cua, int k)
{
  for (int i = 0; i < cua.size(); ++i) {
    cua.front().segon += k;
    cua.push(cua.front());
    cua.pop();
  }
}

queue<parint> afegeix_k_ret(queue<parint>& cua, int k)
{
  queue<parint> aux;
  parint parint_aux;
  while (not cua.empty()) {
    parint_aux = cua.front();
    parint_aux.segon += k;
    aux.push(parint_aux);
    cua.pop();
  } 
  return aux;	
}

#endif
