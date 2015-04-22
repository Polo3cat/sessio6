#include <queue>
#include <iostream>

using namespace std;


struct parint {
  int id;
  int temps;
};

void distribucio(queue<parint>& c, queue<parint>& c2)
{
  int acu_c, acu_c2;
  acu_c = acu_c2 = 0;
  int tamany;
  tamany = c.size();
  for (int i = 0; i < tamany; ++i) {
    if (acu_c <= acu_c2) {
      c.push(c.front());
      acu_c += c.front().temps;
      c.pop();
    }
    else {
      c2.push(c.front());
      acu_c2 += c.front().temps;
      c.pop();
    }
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
  queue<parint> c, c1;
  int a, b;
  while (cin >> a and a != 0 and cin >> b and b!= 0) {
    parint aux;
    aux.id = a;
    aux.temps = b;
    c.push(aux);
  }
  distribucio(c, c1);
  cout << "Cua 1: " << endl;
  escriu_cua(c);
  cout << "Cua 2; " << endl;
  escriu_cua(c1);
}