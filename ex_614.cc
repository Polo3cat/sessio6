//Secuencia de () [] acabada en . se debe determinar si la parentización es correcta
#include <iostream>
using namespace std;

bool casoA (char in, int contA, int contC);
bool casoB (char in, int contA, int contC);
bool casoC (char in, int contA, int contC);
bool casoD (char in, int contA, int contC);
bool casoE (char in, int contA, int contC);

int main ()
{
  int contA = 0;
  int contC = 0;
  char in;
  cin >> in;
  bool ret;
  switch (in) {
    case '(':
      ret = casoA(in, contA, contC);
      break;
    case ')':
      ret = casoB(in, contA, contC);
      break;
    case '[':
      ret = casoC(in, contA, contC);
      break;
    case ']':
      ret = casoD(in, contA, contC);
      break;
    default:
      ret = casoE(in, contA, contC);
  }
  if (ret) {
    cout << "correcta" << endl;
  }
  else {
    cout << "incorrecta" << endl;
  }
}

bool casoA (char in, int contA, int contC)
{
  if (contA < 0 or contC < 0) {
    return false;
  }
  ++contA;
  cin >> in;
  switch (in) {
    case ']':
      return false;
      break;
    case '(':
      return casoA(in, contA, contC);
      break;
    case ')':
      return casoB(in, contA, contC);
      break;
    case '[':
      return casoC(in, contA, contC);
      break;
    default:
      return casoE(in, contA, contC);
  }
}

bool casoB (char in, int contA, int contC)
{
    if (contA < 0 or contC < 0) {
    return false;
  }
  --contA;
  cin >> in;
  switch (in) {
    case ']':
      return casoD(in, contA, contC);
      break;
    case '(':
      return casoA(in, contA, contC);
      break;
    case ')':
      return casoB(in, contA, contC);
      break;
    case '[':
      return casoC(in, contA, contC);
      break;
    default:
      return casoE(in, contA, contC);
  }
}

bool casoC (char in, int contA, int contC)
{
    if (contA < 0 or contC < 0) {
    return false;
  }
  ++contC;
  cin >> in;
  switch (in) {
    case ']':
      return casoD(in, contA, contC);
      break;
    case '(':
      return casoA(in, contA, contC);
      break;
    case ')':
      return false;
      break;
    case '[':
      return casoC(in, contA, contC);
      break;
    default:
      return casoE(in, contA, contC);
  }
}

bool casoD (char in, int contA, int contC)
{
    if (contA < 0 or contC < 0) {
    return false;
  }
  --contC;
  cin >> in;
  switch (in) {
    case ']':
      return casoD(in, contA, contC);
      break;
    case '(':
      return casoA(in, contA, contC);
      break;
    case ')':
      return casoB(in, contA, contC);
      break;
    case '[':
      return casoC(in, contA, contC);
      break;
    default:
      return casoE(in, contA, contC);
  }
}

bool casoE (char in, int contA, int contC)
{
  if (in == '(') {
    ++contA;
  }
  if (in == ')') {
    --contA;
  }
  if (in == ']') {
    ++contC;
  }
  if (in == '[') {
    --contC;
  }
  if (contA != 0 or contC != 0) {
    return false;
  }
  else return true;
}