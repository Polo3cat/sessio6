#include <queue>
#include <iostream>

using namespace std;


struct parint {
  int id;
  int temps;
};

void distribucio(queue<parint>& c, queue<parint>& c1, queue<parint>& c2)
{
  int acu_c1, acu_c2;
  acu_c1 = acu_c2 = 0;
  parint aux;
  while (not c.empty()) {
    if (acu_c1 <= acu_c2) {
      c1.push(c.front());
      aux = c.front();
      acu_c1 += aux.temps;
    }
    else {
      c2.push(c.front());
      aux = c.front();
      acu_c2 += aux.temps;
    }
    c.pop();
  }
}

void escriu_cua (queue<parint> cua)
{
  parint aux;
  while (not cua.empty()) {
    aux = cua.front();
    cout << aux.id << " " << aux.temps << endl;
    cua.pop();
  }
}

int main()
{
  queue<parint> c, c1, c2;
  int a, b;
  while (cin >> a and a != 0 and cin >> b and b!= 0) {
    parint aux;
    aux.id = a;
    aux.temps = b;
    c.push(aux);
  }
  distribucio(c, c1, c2);
  cout << "Cua 1: " << endl;
  escriu_cua(c1);
  cout << "Cua 2; " << endl;
  escriu_cua(c2);
}