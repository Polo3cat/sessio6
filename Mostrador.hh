#ifndef _MOSTRADOR_
#define _MOSTRADOR_

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;


//Mòdul de dades
//Defineix la clase Mostrador, que és un conjunt de categories amb piles de llibres
//Un llibre té títol i forma part d'una categoria
class Mostrador {
  
private: 
  struct llibre {
    int categoria;
    string titol;
  };
  int n; //nombre de categories
  vector<stack<llibre> > mostrador;
 
public:
  //Constructors
  
  Mostrador(int n);
  //PRE: 1 <= n 
  //POST: es crea un conjunt de n stacks 
  
  ~Mostrador();
  
  //Modificadors
  
  void afegir_llibre(string nom, int cat);
  //PRE: 1 <= cat <=n
  //POST: el llibre s'ha apil·lat a la categoria cat
  
  void retirar_llibres(int cat, int quantitat);
  //PRE: 1 <= cat <= n
  //POST: la categoria cat es buida quantitat llibres
  
  //Consultors
  
  bool es_buida(int cat);
  //PRE: cert
  //POST: retorna cert si la pila cat es buida
  
  void escriure_pila(int cat);
  //PRE: cert
  //POST: s'escriu pel canal estandard de sortida la pila cat
  
};

#endif