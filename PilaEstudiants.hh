#ifndef _PILAESTUDIANTS_
#define _PILAESTUDIANTS_

#include "Estudiant.hh"
#include <cmath>
#include <stack>

void llegir_stack_estudiant (stack<Estudiant>& s)
//PRE: true
//POST: el stack s conté els Estudiants que han arribat pel canal estandard d'entrada fins a la marca (-1)
{
  int dni;
  double nota;
  cin >> dni;
  while (dni != -1) { //este -1 es in int
    Estudiant a(dni);
    if(cin >> nota and nota != -1) { //este -1 es un double
      a.afegir_nota(nota);
      s.push(a);
      cin >> dni;
    }
  }  
}

void escriure_stack_estudiant (stack<Estudiant> s)
//PRE: true
//POST: s'ha escrit pel canal estandard de sortida l'stack
{
  Estudiant aux;
  while (not s.empty()) {
    aux = s.top();
    s.pop();
    aux.escriure();
  }
}

void calcula_nota_mitja_stack_estudiant (stack<Estudiant>& s)
//PRE: s conté Estudiant amb nota
//POST: la nota dels Estudiant estan arrodonides
{
  Estudiant aux_est;
  stack<Estudiant> aux_stack;
  double nota;
  while (not s.empty()) {
    aux_est = s.top();
    nota = aux_est.consultar_nota();
    nota += 0.5;
    nota = floor(nota);
    aux_est.modificar_nota(nota);
    aux_stack.push(aux_est);
    s.pop();
  } 
  while (not aux_stack.empty()) {
    s.push(aux_stack.top());
    aux_stack.pop();
  }
}

#endif